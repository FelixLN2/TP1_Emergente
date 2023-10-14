#ifndef _classeDate_H
#define _classeDate_H
#include <iostream>
#include <string> 

using namespace std;



class Date {
private:
    int jour, mois, annee;
    int valide(int, int, int);

public:
    Date();
    Date(int jour, int mois, int annee);

    void afficher();
    int modifier(int jour, int mois, int annee); // Retourne 1 si la date est modifiée, 0 sinon
};

Date::Date() : jour(6), mois(10), annee(2023) {
    // Initialisation par défaut de la date
}


#endif
