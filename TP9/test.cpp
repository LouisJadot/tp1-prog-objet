#include <iostream>
using namespace std;

// Fonction template 1 : deux types génériques
template <class T, class U>
void fct(T a, U b) {
    cout << "Je suis la fonction 1" << endl;
}

// Fonction template 2 : pointeur + type générique
template <class T, class U>
void fct(T* a, U b) {
    cout << "Je suis la fonction 2" << endl;
}

// Fonction template 3 : trois paramètres du même type
template <class T>
void fct(T a, T b, T c) {
    cout << "Je suis la fonction 3" << endl;
}

// Fonction 4 : version spécifique int et float
void fct(int a, float b) {
    cout << "Je suis la fonction 4" << endl;
}

int main() {
    int n = 0, p = 0, q = 0;
    float x = 0.0, y = 0.0;
    double z = 0.0;

    cout << "fct(n, p) ; ";
    fct(n, p);          // fonction 1

    cout << "fct(x, y) ; ";
    fct(x, y);          // fonction 1

    cout << "fct(n, x) ; ";
    fct(n, x);          // fonction 1

    cout << "fct(n, z) ; ";
    fct(n, z);          // fonction 1

    cout << "fct(&n, p) ; ";
    fct(&n, p);         // fonction 2

    cout << "fct(&n, x) ; ";
    fct(&n, x);         // fonction 2

    cout << "fct(&n, &p, &q) ; ";
    // fct(&n, &p, &q); // ne compile pas, car template 3 attend le même type, ici ce sont des int*

    return 0;
}
