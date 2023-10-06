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

    cout << "tableau contient: ";
    int* pointeur = tab;
    for (int i = 0; i < taille; i++) {
        cout << *pointeur;
        if (i < taille - 1) {
            std::cout << ", ";
        }
        pointeur++;
    }
    cout << endl;

    
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
    try {
        bool status = true;
        int length = sizeof(tab1) / sizeof(tab1[0]);
        

        for (int i = 0; i < length; i++) {
            if (*tab1 != *tab2) {
                status = false;
            }

            tab1++;
            tab2++;
        }
        
        return status;
    }
    catch (const std::exception& ex) {
        cerr << ex.what();
      
    }
}

int* concatenerTab(int* tab1, int* tab2, int taille) {
    int tailleNouvelle = taille + taille;

    int* resultat = new int[tailleNouvelle];

    for (int i = 0; i < taille; i++) {
        resultat[i] = tab1[i];
    }

    for (int i = 0; i < taille; i++) {
        resultat[taille + i] = tab2[i];
    }
    return resultat;

}



int main()
{
    
    const int NB_ELEMENTS = 10;
    int tableau1[] = { 22, 44, 12, 61, 4, 99, 33, 17, 15, 123 };
    int tableau2[] = { 22, 33, 44, 61, 4, 99, 12, 17, 123, 15 };
    int tableau3[] = { 22, 44, 12, 61, 4, 99, 33, 17, 15, 123 };
    int* tableau4 = concatenerTab(tableau1, tableau2, NB_ELEMENTS);

  
    cout << "tableau1 : ";
    afficherTab(tableau1, NB_ELEMENTS);
    cout << " | tableau2 : ";
    afficherTab(tableau2, NB_ELEMENTS);
    cout << " | tableau3 : ";
    afficherTab(tableau3, NB_ELEMENTS);
    cout << " | tableau4 : ";
    afficherTab(tableau4, 20);
  
    
    string boolStr = egalite(tableau1, tableau2, NB_ELEMENTS) ? "true" : "false";
    cout << " | tableau1 et tableau2 Egaux? : "+boolStr;
    string boolStr2 = egalite(tableau1, tableau3, NB_ELEMENTS) ? "true" : "false";
    cout << " | tableau1 et tableau3 Egaux? : " + boolStr2;
    string boolStr3 = egalitePtr(tableau1, tableau2, NB_ELEMENTS) ? "true" : "false";
    cout << " | tableau1 et tableau2 Egaux? : " + boolStr3;
    string boolStr4 = egalitePtr(tableau1, tableau3, NB_ELEMENTS) ? "true" : "false";
    cout << " | tableau1 et tableau3 Egaux? : " + boolStr4;
    
    trierTab(tableau1, NB_ELEMENTS);
    trierTab(tableau2, NB_ELEMENTS);
    trierTab(tableau3, NB_ELEMENTS);
    trierTab(tableau4, 20);

    cout << "tableau1 : ";
    afficherTab(tableau1, NB_ELEMENTS);
    cout << " | tableau2 : ";
    afficherTab(tableau2, NB_ELEMENTS);
    cout << " | tableau3 : ";
    afficherTab(tableau3, NB_ELEMENTS);
    cout << " | tableau4 : ";
    afficherTab(tableau4, 20);

    string boolStr5 = egalitePtr(tableau1, tableau2, NB_ELEMENTS) ? "true" : "false";
    cout << " | tableau1 et tableau2 Egaux? : " + boolStr5;
    string boolStr6 = egalitePtr(tableau1, tableau3, NB_ELEMENTS) ? "true" : "false";
    cout << " | tableau1 et tableau3 Egaux? : " + boolStr6;
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


