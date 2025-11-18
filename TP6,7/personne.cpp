#include "personne.h"
#include <iostream>
using namespace std;

Personne::Personne(const string& nom, const string& prenom, 
                   const string& adresse, const string& telephone): 
    nom(nom), prenom(prenom), adresse(adresse), telephone(telephone) {}

string Personne::getNom() const { return nom; }
string Personne::getPrenom() const { return prenom; }
string Personne::getAdresse() const { return adresse; }
string Personne::getTelephone() const { return telephone; }

void Personne::setNom(const string& nom) { this->nom = nom; }
void Personne::setPrenom(const string& prenom) { this->prenom = prenom; }
void Personne::setAdresse(const string& adresse) { this->adresse = adresse; }
void Personne::setTelephone(const string& telephone) { this->telephone = telephone; }

void Personne::affiche() const {
    cout << "Nom : " << nom << endl;
    cout << "Prenom : " << prenom << endl;
    cout << "Adresse : " << adresse << endl;
    cout << "Telephone : " << telephone << endl;
}
