#ifndef GUERRIER_H_INCLUDED
#define GUERRIER_H_INCLUDED

#include <iostream>
#include <string>
#include "Personnage.h"
//Ne pas oublier d'inclure Personnage.h pour pouvoir en hériter !

class Guerrier : public Personnage{

public:
    void frapperCommeUnSourdAvecUnMarteau() const;

};

#endif // GUERRIER_H_INCLUDED
