#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double x, suma = 0;
    bool sumar = true; // Alternador de signo

    cout << "Ingrese X y el limite impar N: ";
    cin >> x >> n;

    for (int i = 1; i <= n; i += 2) {
        // Calculamos factorial del numero impar actual
        double fact = 1;
        for (int j = 1; j <= i; j++) fact *= j;

        if (sumar) {
            suma += pow(x, i) / fact;
        } else {
            suma -= pow(x, i) / fact;
        }
        sumar = !sumar; // Cambia el signo para la siguiente vuelta
    }

    cout << "Resultado de la serie (seno aproximado): " << suma << endl;
    return 0;
}
