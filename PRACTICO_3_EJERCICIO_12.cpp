#include <iostream>
using namespace std;

int main() {
    int a, b, num1, num2, residuo;
    cout << "Ingrese dos numeros enteros (A y B): ";
    cin >> a >> b;

    num1 = a;
    num2 = b;

    // Primero calculamos el MCD
    while (num2 != 0) {
        residuo = num1 % num2;
        num1 = num2;
        num2 = residuo;
    }

    int mcd = num1;
    // Aplicamos la formula (usamos multiplicacion primero, luego division)
    int mcm = (a * b) / mcd;

    cout << "El MCM de " << a << " y " << b << " es: " << mcm << endl;
    return 0;
}
