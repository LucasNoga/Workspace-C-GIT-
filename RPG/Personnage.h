#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Arme.h"

class Personnage
{
    public:

    Personnage();
    void recevoirDegats(int degats);
    void coupDePoing(Personnage &cible) const;
//    Personnage(std::string nomArme, int degatsArme);
//    Personnage(Personnage const& personnageACopier);
//    ~Personnage();
//    void recevoirDegats(int nbDegats);
//    void attaquer(Personnage &cible);
//    void boirePotionDeVie(int quantitePotion);
//    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
//    bool estVivant();
//    void afficherEtat();

    private:

    int m_vie;
    std::string m_nom;
//    int m_mana;
//    Arme *m_arme;
};

#endif
