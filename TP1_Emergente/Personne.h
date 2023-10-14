#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "Date.h"

class Personne {
private:
    std::string nom;
    std::string prenom;
    char sexe;
    Date date;  

public:
    Personne();
    void afficher();
};

#endif
