#include "eleve.h"
#include <iostream>
using namespace std;

Eleve::Eleve(const string& nom, const string& prenom,
             const string& promotion, float GPA,
             const string& groupeTD,
             const string& adresse, const string& telephone)
    : Personne(nom, prenom, adresse, telephone), GPA(GPA), groupeTD(groupeTD){}

string Eleve::getPromotion() const { return promotion; }
string Eleve::getGroupeTD() const { return groupeTD; }
float Eleve::getGPA() const { return GPA; }

void Eleve::setPromotion(const string& promotion) { this->promotion = promotion; }
void Eleve::setGroupeTD(const string& groupeTD) { this->groupeTD = groupeTD; }
void Eleve::setGPA(const float& GPA) { this->GPA = GPA; }

void Eleve::affiche() const {
    Personne::affiche();
    cout << "Promotion : " << promotion << endl;
    cout << "Groupe de TD : " << groupeTD << endl;
    cout << "GPA : " << GPA << endl;
}
