#include "date.h"
#include <iostream>

using namespace std;



Date::Date() {
    jour=1;
    mois=01;
    année=2000;
}

Date::Date(int j, int m, int a) {
    if (0<j<32 and 1999<a<2051 and 0<m<13 ){
        jour=j;
        mois=m;
        année=a;
    }
    else {
        jour=1;
        mois=1;
        année=2000;
    }
}

void Date::Affiche()const{
    std::cout << "Date : " << jour << "/" << mois << "/" << année << std::endl;
}

int Date::getj() const {
    return jour;
} 

int Date::getm() const {
    return mois;
} 

int Date::geta() const {
    return année;
} 

void Date::setj(int j){
    if(0<j<32){
        jour=j;
    }
    else {
        jour=1;
    }
}

void Date::setm(int m){
    if(0<m<13){
        mois=m;
    }
    else {
        mois=01;
    }
}

void Date::seta(int a){
    if(1999<a<2051){
        année=a;
    }
    else {
        année=2000;
    }
}

