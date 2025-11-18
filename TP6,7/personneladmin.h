#ifndef PERSONNELADMIN_H
#define PERSONNELADMIN_H

#include "personnel.h"
using namespace std;

class PersonnelAdmin : public Personnel {
private:
    int heuresSup;
    float taux;

public:
    PersonnelAdmin(const string& nom, const string& prenom,
                   const string& adresse = "", const string& telephone = "",
                   float salaire = 0.0, int heuresSup = 0, float taux = 0.0);

    int getHeuresSup() const;
    float getTaux() const;

    void setHeuresSup(const int& h);
    void setTaux(const float& t);

    float calculsalaire() override;

    void affiche() override;
};

#endif

