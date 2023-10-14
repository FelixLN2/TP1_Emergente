#include "Employe.h"
#include <iostream>
#include <string>;
#include "Date.h"

using namespace std;


Employe::Employe() {
    cout << "Constructeur a quatre arguments de Employe" << endl;
    poste = "developpeur";
    salaire = 30.26;
    Date dateEmbauche; 
}

void Employe::afficher() {
    cout << "Poste : " << poste << " Salaire : " << salaire << " Date d'embauche : ";
    dateEmbauche.afficher();
    cout << endl;
}