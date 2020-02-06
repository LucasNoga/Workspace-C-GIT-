//#include <iostream>
//#include <string.h>
//#include <stdlib.h>
//#include <vector>
//#include <fstream>
////#include "moyenne.h"
////#include "mystery_word.h"
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//std::string pick_word();
//void start_game();
//std::string shuffle_word(std::string word);
//int number_of_line_in_file(string filename);
//
//
//int const TRIES = 5;
//string const WORD_FILE = "dico.txt";
//
////int main(){
//    //cout << pick_word() << endl;
//
//    int playable = 1;
//    string test_playable = "";
//
//    while(playable){
//        start_game();
//        cout << "Voulez-vous faire une autre partie ? (O/N)" << endl;
//        cin >> test_playable;
//        if (test_playable == "N") playable = 0;
//        else if (test_playable == "O") playable = 1;
//        else playable = 0;
//    }
//
//    cout << "Fin de la partie" << endl;
//
//
//    return 0;
//}
//
///*
//Demarrage de partie
//*/
//void start_game(){
//    string word = "";
//    string user_word = "";
//    string shuffled_word = "";
//    int tries = TRIES;
//
//    //cout << "Saisissez un mot : " << endl;
//    //cin >> word;
//
//    word = pick_word(); // on recupere le mot du dictionnaire
//
//    while(word != user_word && tries > 0){
//        cout << "vous dipsoez de "<< tries << " essais" << endl;
//        shuffled_word = shuffle_word(word);
//        cout << "Quel est ce mot ? " << shuffled_word << endl;
//        cin >> user_word;
//        tries--;
//    }
//
//    if(tries > 0){
//        cout << "Bravo ! vous avez reussi en " << TRIES-tries << " essais" << endl;
//    }
//    else{
//        cout << "Perdu, vous atteints vos " << TRIES << " essais" << endl;
//        cout << "Le mot a trouver etait : " << word << endl;
//    }
//}
//
///*
//Mélange le mot pour former un anagramme
//*/
//string shuffle_word(string word){
//    string shuffled;
//    int position = 0;
//
//    //Tant qu'on n'a pas extrait toutes les lettres du mot
//    while (word.size() != 0){
//        position = rand() % word.size();
//        shuffled += word[position];
//        word.erase(position, 1);
//    }
//
//    //On renvoie le mot mélangé
//    return shuffled;
//}
//
///*
//Selectionne un mot au hasard dans un fichier
//*/
//string pick_word(){
//    srand(time(NULL));
//    int randomLine = rand() % number_of_line_in_file(WORD_FILE); // recupere un nombre aleatoire compris entre 1 et la fin du fichier
//    //cout << "rline " << randomLine << endl;
//    int line = 1;
//    string word = "";
//    ifstream mystream(WORD_FILE.c_str());
//    if(mystream.is_open()){
//        while(getline(mystream, word)){
//            //cout << "line " << line << endl;
//            if(line == randomLine) return word;// c'est la ligne qui contient le mot a recuperer
//            else line++;
//        }
//        mystream.close();
//
//    }
//    else{
//        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
//    }
//    return word;
//}
//
///*
//Retourne le nombre de ligne du fichier
//*/
//int number_of_line_in_file(string filename){
//    string word = "";
//    ifstream mystream(WORD_FILE.c_str());  //Ouverture d'un fichier en lecture
//    int nbLine = 0;
//
//    if(mystream.is_open()){
//        while(getline(mystream, word)){
//            nbLine++;
//        }
//    }
//    return --nbLine; //on supprime la derniere ligne qui est vide
//}
//
