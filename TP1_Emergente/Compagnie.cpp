#include "Compagnie.h"
#include <iostream>
#include <string>;
#include <fstream>
using namespace std;
//int main()
//{
//    string nomFichier;
//    ifstream fichier;
//    ofstream fichierSortie;
//
//    fichierSortie.open("sortie.txt");
//
//    cout << "Entrez un nom de fichier: " << endl;
//
//    fichier.open("test.txt");
//    if (!fichier) {
//        cerr << "Fichier introuvable" << endl;
//        return -1;
//    }
//
//    string motLu;
//    while (fichier >> motLu) {
//
//        fichierSortie << motLu << endl;
//    }
//
//    fichierSortie.close();
//    fichier.close();
//    return 0;
//
//}
Compagnie::Compagnie() {
cout << "Constructeur a trois arguments de Compagnie" << endl;
 nombreEmployesActuel=23;
 nombreMaxEmployes=30;
string nomCompagnie="bipbip";
}
void Compagnie::afficher()
{
	cout << nomCompagnie << " a " << nombreEmployesActuel << " d'employes" << endl;
	
}
