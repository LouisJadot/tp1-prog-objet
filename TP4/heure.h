#ifndef HEURE_H
#define HEURE_H

#include <iostream>
#include <vector>
#include <cmath>

class Heure {
private:
    int heure;
    int minute;
public:
    Heure(); 
    Heure(int h, int m);

    void Affiche() const;

    void seth(int h);
    void setm(int m);

    int geth() const;
    int getm()const;
};

#endif