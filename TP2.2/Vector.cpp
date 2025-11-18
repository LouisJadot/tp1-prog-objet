#include "Vector.h"
#include <iostream>

using namespace std;

int Vector::compteurdInstance = 0;

Vector::Vector() {
    coords = {};
    compteurdInstance++;
}


Vector::Vector(int dimension) {
    coords.resize(dimension, 0);
    compteurdInstance++;
}

Vector::Vector(const std::vector<double>& values) {
    coords = values;
    compteurdInstance++;
}

Vector::Vector(const Vector& other) {
    coords=other.coords;
    compteurdInstance++;
} 
Vector::~Vector() {
    if (compteurdInstance!=0){
        compteurdInstance--;}
}

double Vector::getCoordonnéi(int indice) const {
    if(indice >= 0 && indice < coords.size())
        return coords[indice];
    else {
        std::cerr << "Indice hors limites !" << std::endl;
        return 0.0;
    }
}

void Vector::setCoordonnéi(const int& indice, const double& valeur){
    if(indice >= 0 && indice < coords.size())
        coords[indice]=valeur;
    else {
        std::cerr << "Indice hors limites !" << std::endl;
    }
}

void Vector::affiche() const {
    for(int i = 0; i < coords.size(); i++){
        std::cout << coords[i];
            if(i != coords.size() - 1) std::cout << ", ";
    }
    std::cout << ")" << std::endl;
}

double Vector::calculenorme() const {
    double norme2=0;
    for (int i =0; i<coords.size(); i++){
        norme2+=std::pow(coords[i],2);
    }
    return sqrt(norme2);
}

bool Vector::sontpareil(const Vector& other) const {
    for (int i =0; i<coords.size(); i++){
        if (coords[i]!=other.coords[i]){
            return false;
        }
    }
    return true;
}

double Vector::produitscalaire (const Vector& other) const {
    double prodscal=0;
    for (int i =0; i<coords.size(); i++){
        prodscal+=coords[i]*other.coords[i];
    }
    return prodscal;
}

Vector Vector:: multiplierscalaire(const double& scalar) const {
    std::vector<double> result(coords.size());
    for (int i =0; i<coords.size(); i++){
        result[i]=coords[i]*scalar;
    return Vector(result);
}

Vector Vector::sommesdeuxvecteurs(const Vector& other) const {
    std::vector<double> result(coords.size());
    for (int i =0; i<coords.size(); i++){
        result[i]=coords[i]*other.coords[i];}
    return Vector(result);
}




