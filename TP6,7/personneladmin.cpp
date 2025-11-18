#include "personneladmin.h"
#include <iostream>

using namespace std;

PersonnelAdmin::PersonnelAdmin(const string& nom, const string& prenom,
                               const string& adresse, const string& telephone,
                               float salaire, int heuresSup, float taux)
    : Personnel(nom, prenom, adresse, telephone, salaire), heuresSup(heuresSup), 
                taux(taux) {}

int PersonnelAdmin::getHeuresSup() const { return heuresSup; }
float PersonnelAdmin::getTaux() const { return taux; }

void PersonnelAdmin::setHeuresSup(const int& h) { heuresSup = h; }
void PersonnelAdmin::setTaux(const float& t) { taux = t; }

float PersonnelAdmin::calculsalaire() {
    return getsalaire() + (taux * heuresSup);
}

void PersonnelAdmin::affiche() {
    Personnel::affiche();
    cout << "Heures sup: " << heuresSup
    << "\nTaux: " << taux
    << "\nSalaire total: " << calculsalaire() << endl;
}
