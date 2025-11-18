#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
using namespace std;

class Personne {
private:
    string nom;
    string prenom;
    string adresse;
    string telephone;

public:
    Personne(const string& nom, const string& prenom, 
             const string& adresse, const string& telephone);

    string getNom() const;
    string getPrenom() const;
    string getAdresse() const;
    string getTelephone() const;

    void setNom(const string& nom);
    void setPrenom(const string& prenom);
    void setAdresse(const string& adresse);
    void setTelephone(const string& telephone);

    void affiche() const;
};

#endif
