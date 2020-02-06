#include "Duree.h"
using namespace std;

Duree::Duree(int heure, int minute, int seconde): m_heure(heure), m_minute(minute), m_seconde(seconde)
{

}

bool Duree::isEqual(Duree const& b) const
{
    return (this->m_heure == b.m_heure && this->m_minute == b.m_minute && this->m_seconde == b.m_seconde);
}

// methode de comparaison ==
bool operator==(Duree const& a, Duree const& b)
{
    return a.isEqual(b);
}

// methode de comparaison !=
bool operator!=(Duree const& a, Duree const& b)
{
    if(a == b) //On utilise l'opérateur == qu'on a défini précédemment !
        return false; //S'ils sont égaux, alors ils ne sont pas différents
    else
        return true; //Et s'ils ne sont pas égaux, c'est qu'ils sont différents
}

bool operator<(Duree const& a, Duree const& b)
{
    return a.smallerThan(b);
}

bool Duree::smallerThan(Duree const& b) const
{
    if (this->m_heure < b.m_heure)   // Si les heures sont différentes
        return true;
    else if (this->m_heure == b.m_heure && this->m_minute < b.m_minute) //Si elles sont égales, on compare les minutes
        return true;
    else if (this->m_heure == b.m_heure && this->m_minute == b.m_minute && this->m_seconde < b.m_seconde) // Et si elles sont aussi égales, on compare les secondes
        return true;
    else              //Si tout est égal, alors l'objet n'est pas plus petit que b
        return false;
}

Duree& Duree::operator+=(const Duree& a)
{
    //1 : ajout des secondes
    this->m_seconde += a.m_seconde;
    //Si le nombre de secondes dépasse 60, on rajoute des minutes
    //Et on met un nombre de secondes inférieur à 60
    this->m_minute += this->m_seconde / 60;
    this->m_seconde %= 60;

    //2 : ajout des minutes
    this->m_minute += a.m_minute;
    //Si le nombre de minutes dépasse 60, on rajoute des heures
    //Et on met un nombre de minutes inférieur à 60
    this->m_heure += this->m_minute / 60;
    this->m_minute %= 60;

    //3 : ajout des heures
    this->m_heure += a.m_heure;

    return *this;
}

Duree operator+(Duree const& a, Duree const& b)
{
    Duree copie(a);   //On utilise le constructeur de copie de la classe Duree !
    copie += b;       //On appelle la méthode d'addition qui modifie l'objet 'copie'
    return copie;     //Et on renvoie le résultat. Ni a ni b n'ont changé.
}

void Duree::display()
{
    cout << "La Duree est de : " << this->m_heure << " heures " << this->m_minute << " minutes " << this->m_seconde << " secondes " << endl;
}

Duree::~Duree()
{
    //cout << "Variable detruite" << endl;
}

