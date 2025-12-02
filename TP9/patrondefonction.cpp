#include <iostream>
using namespace std;

template <typename T>
auto somme(T tableau[], int n) -> decltype(+tableau[0]) {
    decltype(+tableau[0]) total = 0; 
    for (int i = 0; i < n; i++) {
        total += tableau[i];
    }
    return total;
}


int main() {
    
    int tabInt[] = {1, 2, 3, 4, 5};
    cout << "Somme entiers " << somme(tabInt, 5) << endl;

    float tabFloat[] = {1.5, 2.5, 3.5};
    cout << "Somme floats " << somme(tabFloat, 3) << endl;

    char tabChar[] = {'A', 'B', 'C'}; 
    cout << "Somme caractères " << somme(tabChar, 3) << endl;

    return 0;
}


