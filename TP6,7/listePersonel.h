#ifndef LISTEPERSONNEL_H
#define LISTEPERSONNEL_H

#include "personnel.h"

class ListePersonnel {
private:
    Personnel** tab;   
    int taille;        
    int nb;            

    void doubleTableau();  

public:
    ListePersonnel(int tailleInitiale = 5);
    ~ListePersonnel();

    void ajoutPersonnel(Personnel* ptPersonnel);
    void afficherSalaires() const;
};

#endif
