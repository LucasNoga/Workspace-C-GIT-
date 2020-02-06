#include <iostream>
#include <string>
#include <cmath>
#include "math.h"

using namespace std;

int main()
{
    cout << "Saissisez un premier nombre : ";
    double a = 0, b = 0;
    cin >> a;
    cout << "Saissisez un second nombre : ";
    cin >> b;
    //cout << endl;
    cout << "Votre resultat est : " << pow(a, b) << endl;
}
