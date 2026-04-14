#include <iostream>
using namespace std;

int main() {
    int n;
    long long f0 = 1, f1 = 1, fn = 0;

    cout << "Ingrese la posicion (n) de Fibonacci a calcular: ";
    cin >> n;

    if (n == 0 || n == 1) {
        cout << "El numero Fibonacci es: 1" << endl;
    } else {
        for (int i = 2; i <= n; i++) {
            fn = f1 + f0; // Suma de los dos anteriores
            f0 = f1;      // Desplazamos los valores
            f1 = fn;
        }
        cout << "El numero Fibonacci en la posicion " << n << " es: " << fn << endl;
    }

    return 0;
}
