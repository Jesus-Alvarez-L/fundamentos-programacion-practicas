#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double x, suma = 0, fact = 1;
    cout << "Ingrese X y N: ";
    cin >> x >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;
        if (i % 2 != 0) {
            suma += pow(x, i) / fact;
        } else {
            suma -= pow(x, i) / fact;
        }
    }

    cout << "Resultado de la serie alternada: " << suma << endl;
    return 0;
}
