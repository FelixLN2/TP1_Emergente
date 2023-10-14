#include "Personne.h"
#include "Date.h"
#include <string> 
#include <iostream>
using namespace std;



Personne::Personne() {
    cout << "Constructeur a quatre arguments de Personne" << endl;
    nom = "John";    
    prenom = "Doe";
    sexe = 'M';
    Date date; 
}

void Personne::afficher() {
    cout << nom << " " << prenom << " " << sexe << " "; 
    date.afficher(); 
    cout << " 26 mars 2018" << endl;
}