#include "enseignantvacataire.h"
#include <iostream>
using namespace std;

EnseignantVacataire :: EnseignantVacataire (const string& nom, const string& 
                            prenom, const string& adresse, const string& 
                            telephone ,float salaire, 
                            const string& casier, const int& nombreHeures, 
                            const float& taux) 
    :Personnel(nom, prenom, adresse, telephone, salaire),
      casier(casier), nombreHeures(nombreHeures), taux(taux) {}

float EnseignantVacataire :: calculsalaire (){ return taux*nombreHeures ; }

void EnseignantVacataire::affiche () {
    Personnel::affiche();
     cout << "casier : " << casier 
            <<"\nnombre d'heures :" << nombreHeures
            <<"\ntaux :" << taux << endl;
    }