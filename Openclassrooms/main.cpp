#include <iostream>
#include <string>
#include "Duree.h"

using namespace std;

int main()
{
    Duree dur1;
    Duree dur2(5, 45, 24);
    dur1.display();
    dur2.display();

    //dur1.~Duree();
    //dur1.afficher();
    //dur2.~Duree();

    if (dur1 == dur2)
        cout << "Les durees sont identiques" << endl;
    else
        cout << "Les durees sont differentes" << endl;


    if (dur1 < dur2)
        cout << "La premiere duree est plus petite" << endl;
    else
        cout << "La premiere duree n'est pas plus petite" << endl;


    Duree duree1(0, 10, 28), duree2(0, 15, 2);
    //Duree resultat;

    duree1.display();
    cout << " et " << endl;
    duree2.display();

    duree1 += duree2;

    cout << " donne " << endl;
    duree1.display();


    return 0;
}
