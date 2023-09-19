// TP1_Emergente.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>

using namespace std;

void trierTab(int* tab, int taille) {
    for (int i = 0; i < taille - 1; ++i) {
        for (int j = 0; j < taille - i - 1; ++j) {
            
            if (tab[j] > tab[j + 1]) {
                
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

void afficherTab(int* tab, int taille) {
    for (int i = 0; i < 10; ++i) {
        std::cout << *(tab+i) << ", ";
    }
}

bool egalite(int tab1[], int tab2[], int taille) {

    bool status = true;

    if (sizeof(tab1) != sizeof(tab2)) {
        status = false;
    }

    for (int i = 0; i < taille - 1; ++i) {
        for (int j = 0; j < taille - i - 1; ++j) {

            if (tab1[j] != tab2[j]) {

                status = false;
            }
        }
    }

    return status;
}

bool egalitePtr(int* tab1, int* tab2, int taille)
{

    bool status = true;

    while (tab1 < tab1 + sizeof(tab1) / sizeof(tab1[0])) {
        if (*tab1 != *tab2) {
            status = false;
        }
        ++tab1;
        ++tab2;
    }
    return status;
}



int main()

{
    
    const int NB_ELEMENTS = 10;
    int tableau1[] = { 22, 44, 12, 61, 4, 99, 33, 17, 15, 123 };
    int tableau2[] = { 22, 33, 44, 61, 4, 99, 12, 17, 123, 15 };
    int tableau3[] = { 22, 44, 12, 61, 4, 99, 33, 17, 15, 123 };

    trierTab(tableau1, NB_ELEMENTS);

    afficherTab(tableau2, NB_ELEMENTS);
  
    
    string boolStr = egalite(tableau1, tableau2, NB_ELEMENTS) ? "true" : "false";
    cout << boolStr;
    string boolStr2 = egalitePtr(tableau1, tableau2, NB_ELEMENTS) ? "true" : "false";
    cout << boolStr2;
}



// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.


