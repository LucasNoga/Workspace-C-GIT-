
#include "Personnage.h"


using namespace std;

//int main()
//{
//    //Création des personnages
//    Personnage david("David", "Épée aiguisée", 20);
//    Personnage goliath("Goliath", "Épée aiguisée", 20);
//
//    //Au combat !
//    goliath.attaquer(david);
//    david.boirePotionDeVie(20);
//    goliath.attaquer(david);
//    david.attaquer(goliath);
//    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
//    goliath.attaquer(david);
//
//    //Temps mort ! Voyons voir la vie de chacun…
//    cout << "David" << endl;
//    david.afficherEtat();
//    cout << endl << "Goliath" << endl;
//    goliath.afficherEtat();
//
//    return 0;
//}


Personnage::Personnage(string nom) : m_nom("?"), m_vie(100), m_mana(100)
{
    m_nom = nom;
}

Personnage::Personnage(string nom, string nomArme, int degatsArme) : m_nom(nom), m_vie(100), m_mana(100), m_arme(nomArme, degatsArme)
{

}

Personnage::~Personnage()
{

}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;

    if (m_vie < 0)
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if (m_vie > 100)
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant()
{
    if (m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Personnage::afficherEtat()
{
    cout << m_nom << " a" << endl;
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    m_arme.afficher();
}
