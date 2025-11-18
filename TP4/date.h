#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <vector>
#include <cmath>

class Date {
private:
    int jour;
    int mois;
    int année;
public:
    Date(); 
    Date(int j, int m, int a);

    void Affiche() const;

    void setj(int j);
    void setm(int m);
    void seta(int a);

    int getj() const;
    int getm()const;
    int geta()const;
};

#endif