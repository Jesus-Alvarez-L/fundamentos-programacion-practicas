#include <iostream>
#include <cmath> // Necesaria para potencias
using namespace std;

int main() {
    int n;
    double x, sumaSerie = 0;

    cout << "Ingrese el valor de la base (X): ";
    cin >> x;
    cout << "Ingrese el limite de la serie (N): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sumaSerie += pow(x, i);
    }

    cout << "El resultado de la serie con X=" << x << " es: " << sumaSerie << endl;
    return 0;
}
