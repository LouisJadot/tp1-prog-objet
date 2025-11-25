#ifndef PERSONNEL_H
#define PERSONNEL_H

#include "personne.h"
#include <string>
using namespace std;

class Personnel : public Personne {
private:
    float salaire;
public:
    Personnel(const string& nom, const string& prenom, const string& adresse = "", 
        const string& telephone ="", const float& salaire= 0.0);

    virtual float calculsalaire() = 0;


    float getsalaire () const;

    void setsalaire (const float& salaire);

    virtual void affiche ();

};
#endif 