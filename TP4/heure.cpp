#include "heure.h"
#include <iostream>

using namespace std;



Heure::Heure() {
    heure=00;
    minute=00;
}

Heure::Heure(int h, int m) {
    if (-1<h<25 and -1<m<61){
        heure=h;
        minute=m;
    }
    else {
        heure=00;
        minute=00;
    }
}

void Heure::Affiche()const{
    std::cout << "Heure : " << heure<< "h" << minute << std::endl;
}

int Heure::geth() const {
    return heure;
} 

int Heure::getm() const {
    return minute;
} 

void Heure::seth(int h){
    if(-1<h<25){
        heure=h;
    }
    else {
        heure=00;
    }
}

void Heure::setm(int m){
    if(-1<m<61){
        minute=m;
    }
    else {
        minute=00;
    }
}


