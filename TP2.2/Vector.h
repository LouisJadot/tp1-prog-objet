#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <vector>
#include <cmath>

class Vector {
private:
    std::vector<double> coords;
    static int compteurdInstance;

public:
    Vector();  
    Vector(int dimension);  // vector 0 d'une dimension donné
    Vector(const std::vector<double>& values);  // vecteur avec un tableau
    Vector(const Vector& other);  

    ~Vector();

    double getCoordonnéi(int index) const;
    void setCoordonnéi(const int& index, const double& value);

    void affiche() const;
    double calculenorme() const;
    bool sontpareil(const Vector& other) const;
    double produitscalaire (const Vector& other) const;

    Vector multiplierscalaire(const double& scalar) const;
    Vector sommesdeuxvecteurs(const Vector& other) const;

    static int donnelecompteurdInstance();
};

#endif
