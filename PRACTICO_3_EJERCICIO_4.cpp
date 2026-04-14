#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese el valor de N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            suma += i; // Los impares suman
        } else {
            suma -= i; // Los pares restan
        }
    }

    cout << "El resultado de la serie es: " << suma << endl;
    return 0;
}
