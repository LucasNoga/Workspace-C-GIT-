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
    if(a == b) //On utilise l'op�rateur == qu'on a d�fini pr�c�demment !
        return false; //S'ils sont �gaux, alors ils ne sont pas diff�rents
    else
        return true; //Et s'ils ne sont pas �gaux, c'est qu'ils sont diff�rents
}

bool operator<(Duree const& a, Duree const& b)
{
    return a.smallerThan(b);
}

bool Duree::smallerThan(Duree const& b) const
{
    if (this->m_heure < b.m_heure)   // Si les heures sont diff�rentes
        return true;
    else if (this->m_heure == b.m_heure && this->m_minute < b.m_minute) //Si elles sont �gales, on compare les minutes
        return true;
    else if (this->m_heure == b.m_heure && this->m_minute == b.m_minute && this->m_seconde < b.m_seconde) // Et si elles sont aussi �gales, on compare les secondes
        return true;
    else              //Si tout est �gal, alors l'objet n'est pas plus petit que b
        return false;
}

Duree& Duree::operator+=(const Duree& a)
{
    //1 : ajout des secondes
    this->m_seconde += a.m_seconde;
    //Si le nombre de secondes d�passe 60, on rajoute des minutes
    //Et on met un nombre de secondes inf�rieur � 60
    this->m_minute += this->m_seconde / 60;
    this->m_seconde %= 60;

    //2 : ajout des minutes
    this->m_minute += a.m_minute;
    //Si le nombre de minutes d�passe 60, on rajoute des heures
    //Et on met un nombre de minutes inf�rieur � 60
    this->m_heure += this->m_minute / 60;
    this->m_minute %= 60;

    //3 : ajout des heures
    this->m_heure += a.m_heure;

    return *this;
}

Duree operator+(Duree const& a, Duree const& b)
{
    Duree copie(a);   //On utilise le constructeur de copie de la classe Duree !
    copie += b;       //On appelle la m�thode d'addition qui modifie l'objet 'copie'
    return copie;     //Et on renvoie le r�sultat. Ni a ni b n'ont chang�.
}

void Duree::display()
{
    cout << "La Duree est de : " << this->m_heure << " heures " << this->m_minute << " minutes " << this->m_seconde << " secondes " << endl;
}

Duree::~Duree()
{
    //cout << "Variable detruite" << endl;
}

