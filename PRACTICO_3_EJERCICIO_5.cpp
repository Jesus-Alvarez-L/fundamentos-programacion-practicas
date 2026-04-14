#include <iostream>
using namespace std;

int main() {
    int n;
    long long producto = 1; // Usamos long long para evitar desbordamiento en números grandes
    int i = 1;

    cout << "Ingrese el valor de N para calcular el producto: ";
    cin >> n;

    while (i <= n) {
        producto *= i;
        i++;
    }

    cout << "El producto total (P) es: " << producto << endl;
    return 0;
}
