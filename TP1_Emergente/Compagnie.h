#pragma once
#ifndef COMPAGNIE_H
#define COMPAGNIE_H
#include <iostream>
#include <fstream>

#include <string> 
#include "Employe.h"
class Compagnie
{
private:

    Employe* tableauEmployes;
    int nombreEmployesActuel;
    int nombreMaxEmployes;
    string nomCompagnie; 
public:
    Compagnie();

    Compagnie(const string nomCompagnie, int nombreMaxEmployes, int nombreEmployesActuel = 0);
    bool lireFichier(const string nomFichier);
    void afficher();


};

#endif


