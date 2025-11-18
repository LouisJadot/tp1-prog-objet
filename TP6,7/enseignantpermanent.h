#ifndef ENSEIGNANTPERMANENT_H
#define ENSEIGNANTPERMANENT_H

#include "personnel.h"
#include <string>
using namespace std;

class EnseignantPermanent : public Personnel {
private:
    string bureau;
    int grade;
    float primeMensuelle;

public:
    EnseignantPermanent(const string& nom, const string& prenom,
                        const string& adresse = "", const string& telephone = "",
                        float salaire = 0.0, const string& bureau = "",
                        int grade = 0, float primeMensuelle = 0.0);

    string getBureau() const;
    int getGrade() const;
    float getPrimeMensuelle() const;

    void setBureau(const string& b);
    void setGrade(const int& g);
    void setPrimeMensuelle(const float& p);

    float calculsalaire()  override;
    void affiche() override;
};

#endif
