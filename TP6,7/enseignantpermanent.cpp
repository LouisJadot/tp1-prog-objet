#include "enseignantpermanent.h"
#include <iostream>
using namespace std;

EnseignantPermanent::EnseignantPermanent(const string& nom, const string& prenom,
                                         const string& adresse, const string& telephone,
                                         float salaire, const string& bureau,
                                         int grade, float primeMensuelle)
    : Personnel(nom, prenom, adresse, telephone, salaire),
      bureau(bureau), grade(grade), primeMensuelle(primeMensuelle) {}

string EnseignantPermanent::getBureau() const { return bureau; }
int EnseignantPermanent::getGrade() const { return grade; }
float EnseignantPermanent::getPrimeMensuelle() const { return primeMensuelle; }

void EnseignantPermanent::setBureau(const std::string& b) { bureau = b; }
void EnseignantPermanent::setGrade(const int& g) { grade = g; }
void EnseignantPermanent::setPrimeMensuelle(const float& p) { primeMensuelle = p; }

float EnseignantPermanent::calculsalaire() {
    return getsalaire() + (grade * primeMensuelle) / 100.0;
}

void EnseignantPermanent::affiche() {
    Personnel::affiche();
    cout << "Bureau: " << bureau
    << "\nGrade: " << grade
    << "\nPrime mensuelle: " << primeMensuelle
    << "\nSalaire total: " << calculsalaire() << endl;
}
