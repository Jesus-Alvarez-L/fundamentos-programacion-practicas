#include <iostream>
#include <iomanip> // Para dar formato a la salida (setw)
using namespace std;

int main() {
    cout << "TABLA DE SUMAR (1 al 10)" << endl << endl;

    // Encabezado de la tabla
    cout << " + |";
    for (int i = 1; i <= 10; i++) cout << setw(4) << i;
    cout << endl << "-----------------------------------------------" << endl;

    // Cuerpo de la tabla
    for (int i = 1; i <= 10; i++) {
        cout << setw(2) << i << " |"; // Indice de fila
        for (int j = 1; j <= 10; j++) {
            cout << setw(4) << (i + j); // Suma de i + j
        }
        cout << endl;
    }

    return 0;
}
