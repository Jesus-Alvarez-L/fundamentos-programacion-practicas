#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese el valor de N: ";
    cin >> n;

    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }

    cout << "La suma de los impares es: " << suma << endl;
    return 0;
}
