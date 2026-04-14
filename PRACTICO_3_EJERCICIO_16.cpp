#include <iostream>
using namespace std;

int main() {
    int n, divisores = 0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n <= 1) {
        cout << "No es primo por definicion." << endl;
    } else {
        // Contamos cuantos divisores tiene entre 1 y n
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            cout << "El numero " << n << " ES PRIMO." << endl;
        } else {
            cout << "El numero " << n << " NO ES PRIMO." << endl;
        }
    }

    return 0;
}
