#include "listePersonel.h"
#include <iostream>
using namespace std;

ListePersonnel::ListePersonnel(int tailleInitiale)
{
    taille = tailleInitiale;
    nb = 0;
    tab = new Personnel*[taille];
}

ListePersonnel::~ListePersonnel()
{
    delete[] tab;
}

void ListePersonnel::doubleTableau()
{
    int nouvelleTaille = taille * 2;
    Personnel** nvTab = new Personnel*[nouvelleTaille];

    for (int i = 0; i < nb; i++)
        nvTab[i] = tab[i];

    delete[] tab;

    tab = nvTab;
    taille = nouvelleTaille;

    cout << " nouveau tablerau de cette taille " << taille << endl;
}

void ListePersonnel::ajoutPersonnel(Personnel* ptPersonnel)
{
    if (nb >= taille)
        doubleTableau();

    tab[nb] = ptPersonnel;
    nb++;
}

void ListePersonnel::afficherSalaires() const
{
    cout << "\n Salaires du personnel \n";
    for (int i = 0; i < nb; i++) {
        cout << tab[i]->getNom() << " " << tab[i]->getPrenom()
             << " : " << tab[i]->calculsalaire() << " €\n";
    }
}
