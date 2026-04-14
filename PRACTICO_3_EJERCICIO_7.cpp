#include <iostream>
using namespace std;

int main() {
    int n;
    double factorial = 1; // double permite factoriales más grandes que int
    cout << "Ingrese N: ";
    cin >> n;

    if (n < 0) {
        cout << "El factorial no existe para numeros negativos." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "FAC(" << n << ") = " << factorial << endl;
    }
    return 0;
}
