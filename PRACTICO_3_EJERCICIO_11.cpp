#include <iostream>
using namespace std;

int main() {
    int a, b, residuo;
    cout << "Ingrese dos numeros enteros (A y B): ";
    cin >> a >> b;

    int num1 = a; // Guardamos copias para no perder los originales
    int num2 = b;

    while (num2 != 0) {
        residuo = num1 % num2;
        num1 = num2;
        num2 = residuo;
    }

    cout << "El MCD de " << a << " y " << b << " es: " << num1 << endl;
    return 0;
}
