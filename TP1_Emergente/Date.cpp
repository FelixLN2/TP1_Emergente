#include "Date.h"
#include <iostream>


using namespace std;




Date::Date(int jour, int mois, int annee) {
    cout << "Constructeur a trois arguments de Date" << endl;
    if (valide(jour, mois, annee)) {
        this->jour = jour;
        this->mois = mois;
        this->annee = annee;
    }
    else {
        cout << "Date non valide. Utilisation des valeurs par défaut." << endl;
        this->jour = 6;
        this->mois = 10;
        this->annee = 2023;
    }
}


int Date::valide(int j, int m, int a) {
    
    if (annee < 0 || annee > 9999) {
        return false; 
    }

 
    if (mois < 1 || mois > 12) {
        return false; 
    }


    int joursDansLeMois = 31;


    if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
        joursDansLeMois = 30;
    }
    else if (mois == 2) { 
        if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
            joursDansLeMois = 29; 
        }
        else {
            joursDansLeMois = 28;
        }
    }

    if (jour < 1 || jour > joursDansLeMois) {
        return false;
    }

    return true;
}

void Date::afficher() {
    cout << jour << " jour " << mois << " mois " << annee << " annee" << endl;
}

int Date::modifier(int jour, int mois, int annee)
{
    if (valide(jour, mois, annee)) {
        this->jour = jour;
        this->mois = mois;
        this->annee = annee;
        return true;
    }
    else {
        cout << "Nouvelle date non valide. Aucune modification n'a été effectuée." << endl;
    }
}



