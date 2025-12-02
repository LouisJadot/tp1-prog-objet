#include <iostream>
using namespace std;

template <typename T>
int indiceMin(T tableau[], int n) {
    T min = tableau[0];
    int m = 0;
    for (int i = 1; i < n; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
            m = i;
        }
    }
    return m;
};

int main() {
    int tabInt[] = {1, 2, 3, 0, 5};
    cout << "Indice min entiers : " << indiceMin(tabInt, 5) << endl;

    float tabFloat[] = {1.5, 2.5, 0.5};
    cout << "Indice min floats : " << indiceMin(tabFloat, 3) << endl;

    char tabChar[] = {'A', 'B', 'C'}; 
    cout << "Indice min caractères : " << indiceMin(tabChar, 3) << endl;

    return 0;
}


