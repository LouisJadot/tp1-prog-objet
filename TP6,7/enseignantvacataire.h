#ifndef ENSEIGNANTVACATAIRE_H
#define ENSEIGNANTVACATAIRE_H

#include "personnel.h"
#include <string>
using namespace std;

class EnseignantVacataire :public Personnel {
    private :
        string casier;
        int nombreHeures;
        float taux;
    public :
        EnseignantVacataire (const string& nom, const string& prenom,
                            const string& adresse = "", const string& 
                            telephone = "",float salaire = 0.0, 
                            const string& casier = "", const int& nombreHeures = 0, 
                            const float&  taux = 0.0);
        float calculsalaire () override;

        void affiche() override;

};
#endif 