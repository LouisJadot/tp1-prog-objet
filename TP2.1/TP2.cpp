#include <iostream>
#include "Point3D.h"
using namespace std;



int main() {
    cout << "=== Test de la classe Point3D ===" << endl;

    Point3D p1;
    cout << "Point p1 (constructeur par défaut) : ";
    p1.affiche();

    Point3D p2(1.0, 2.0, 3.0);
    cout << "Point p2 (constructeur paramétré) : ";
    p2.affiche();

    Point3D p3(p2);
    cout << "Point p3 (copie de p2) : ";
    p3.affiche();

    p1.setpointx(4.0);
    p1.setpointy(5.0);
    p1.setpointz(6.0);
    cout << "p1 après modification avec setters : ";
    p1.affiche();

    p2.translate(1.0, -1.0, 2.0);
    cout << "p2 après translation (1, -1, 2) : ";
    p2.affiche();

    double d = p1.distance(p2);
    cout << "Distance entre p1 et p2 : " << d << endl;

    Point3D p4;
    cout << "\nSaisir un nouveau point p4 :" << endl;
    p4.saisir();
    cout << "Vous avez saisi : ";
    p4.affiche();

    cout << "\nNombre total de points créés : " << Point3D::compteur << endl;

    return 0;
}
