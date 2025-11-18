#include "personnel.h"
#include <iostream>
using namespace std;

Personnel::Personnel( const string& nom, const string& prenom, const string& adresse, 
        const string& telephone, const float& salaire)
        :Personne (nom, prenom, adresse, telephone) {this->salaire=salaire;}


float Personnel :: calculsalaire (){ return salaire; }
 
float Personnel :: getsalaire () const{ return salaire;}

void Personnel :: setsalaire (const float& salaire){ this->salaire = salaire; }

void Personnel :: affiche (){

}

