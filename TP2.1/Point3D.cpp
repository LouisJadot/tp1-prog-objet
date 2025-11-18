
#include "Point3D.h"
#include <cmath>  
#include <iostream>  
using namespace std;

int Point3D::compteur = 0;

Point3D::Point3D() : x(0), y(0), z(0) { compteur +=1;}

Point3D::Point3D(double X, double Y, double Z) : x(X), y(Y), z(Z) {compteur +=1;}

Point3D::Point3D(const Point3D &p) : x(p.x), y(p.y), z(p.z) {compteur +=1;}


void Point3D::setpointx(double X) { x = X; }

void Point3D::setpointy(double Y) { y = Y; }

void Point3D::setpointz(double Z) { z = Z; }


double Point3D::getpointx() const { return x; }

double Point3D::getpointy() const { return y; }

double Point3D::getpointz() const { return z; } 


void Point3D::saisir() {
    cout << "Saisi x : "; cin >> x;
    cout << "Saisi y : "; cin >> y;
    cout << "Saisi z : "; cin >> z;
    compteur +=1;
}

void Point3D::affiche() const {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}

void Point3D::translate(double a, double b, double c) {
    x += a;
    y += b;
    z += c;
}

double Point3D::distance(const Point3D &p) const {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2) + pow(z - p.z, 2));
}
