#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    int i = 1; // Contador inicializado fuera
    cout << "Ingrese el valor de N: ";
    cin >> n;

    while (i <= n) {
        suma += (i * i); // Sumamos el cuadrado del número actual
        i++;             // Incremento manual
    }

    cout << "La suma de los cuadrados es: " << suma << endl;
    return 0;
}
