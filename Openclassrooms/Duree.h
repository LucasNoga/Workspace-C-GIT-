#ifndef DUREE_H_INCLUDED
#define DUREE_H_INCLUDED

#include <iostream>
#include <string>



class Duree{

public:

    //Duree();
    Duree(int heure = 0, int minute = 0, int seconde = 0);

    bool isEqual(Duree const& b) const;
    Duree& operator+=(Duree const&a);
    bool smallerThan(Duree const& b) const;
    void display();
    ~Duree();

private:
    int m_heure;
    int m_minute;
    int m_seconde;

};

Duree operator+(Duree const& a, Duree const& b);
bool operator==(Duree const& a, Duree const& b);
bool operator!=(Duree const& a, Duree const& b);
bool operator<(Duree const& a, Duree const& b);

#endif // DUREE_H_INCLUDED
