double moyenne(double tab[], int taille){
    double moyenne = 0;
    for(int i = 0; i<taille; i++){
        moyenne += tab[i];
    }

    moyenne /= taille;
    return moyenne;
}
