#ifndef POINT3D_H
#define POINT3D_H

#include <iostream>
#include <cmath>
using namespace std;

class Point3D {
private:
    double x, y, z;

public:
    static int compteur;
    Point3D();
    Point3D(double X, double Y, double Z);
    Point3D(const Point3D &p);

    void setpointx(double X);
    void setpointy(double Y);
    void setpointz(double Z);


    double getpointx() const;
    double getpointy() const;
    double getpointz() const;

    void saisir();
    void affiche() const;
    void translate(double a, double b, double c);
    double distance(const Point3D &p) const;
};

#endif

