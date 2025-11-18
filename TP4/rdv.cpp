#include "rdv.h"
#include <iostream>
#include "heure.h"
#include "date.h"
#include <string>

using namespace std;

RDV::RDV() {
    nombreDeParticipants = 0;
    participants = new std::string[10]; 
    lieu = "";
}


void RDV::affiche() const {
    cout << "Rendez-vous :" << endl;

    cout << " le ";
    date.Affiche(); 

    cout << " à ";
    heure.Affiche();

    cout << "au " << lieu << endl;
    cout << "avec " << nombreDeParticipants << "personnes" <<endl;
    if (nombreDeParticipants > 0) {
        cout << "qui sont :" << endl;
        for (int i = 0; i < nombreDeParticipants; ++i) {
            cout << participants[i] <<", " <<endl;
        }
    }
}

void RDV::saisieLieu() {
    cout << "lieu du rendez-vous : ";
    getline(cin, lieu); 
}

void RDV::saisieParticipants() {
    cout << "qui participe (max10)? ";
    for (int i =0; i<10; i++){
        getline(cin,participants[i]);
        if (participants[i]=="")
            return ;
    }
}

void RDV::saisie() {
    cout << "===== Saisie du rendez-vous =====" << endl;

    cout << "Saisir la Date :" << endl;
    int jo;
    int mo;
    int an;
    getline(cin,jo);
    getline(cin,mo);
    getline(cin,an);
    date(jo, mo, an);
    
    cout << "Saisir l'heure :" << endl;
    int heur;
    int min;
    getline(cin,heur);
    getline(cin,min);
    heure(heur,min),

    saisieLieu();
    saisieParticipants();
}



void RDV::setDate(const Date& dateRdv) {
    date = dateRdv;
}

void RDV::setHeure(const Heure& heureRdv) {
    heure = heureRdv;
}

void RDV::setLieu(const string& lieuRdv) {
    lieu = lieuRdv;
}

void RDV::setNombreDeParticipants(int n) {
    if (n < 0) {
        cout << "nombre de participants invalide (negatif) aucune action" << endl;
        return;
    }
    if (n > 10) {
        cout << "nombre demandé > 10 action chosi max" << endl;
        nombreDeParticipants = 10;
    } else {
        nombreDeParticipants = n;
    }
}

void RDV::setParticipants(std::string* ps) {
    if (ps == nullptr) 
        return;
    int limite = 10;
    for (int i = 0; i < limite && i<sizeof(ps) ; ++i) {
        if (ps[i] == "")
            return;
        else 
            participants[i]=ps[i];
    }
}

void RDV::setParticipant(int i, std::string s) {
    if (i < 0 || i >= 10) {
        cout << "indice de participant hors limites "  << endl;
        return;
    }

    participants[i] = s;

    
    if (i >= nombreDeParticipants) {
        nombreDeParticipants = i + 1;
    }
}
