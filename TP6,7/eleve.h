#ifndef ELEVE_H
#define ELEVE_H

#include "personne.h"
#include <string>
using namespace std;

class Eleve : public Personne {
private:
    string promotion;
    string groupeTD;
    float GPA;

public:
    Eleve(const string& nom, const string& prenom,
          const string& promotion = "",
          float GPA = -1,
          const string& groupeTD = "",
          const string& adresse = "",
          const string& telephone = "");

    string getPromotion() const;
    string getGroupeTD() const;
    float getGPA() const;

    void setPromotion(const string& promotion);
    void setGroupeTD(const string& groupeTD);
    void setGPA(const float& GPA);

    void affiche() const;
};

#endif
