#include <iostream>
#include <iomanip>
#include <thread> // Para pausar el tiempo (sleep_for)
#include <chrono>

using namespace std;

int main() {
    // Ciclos anidados para representar el paso del tiempo
    for (int h = 0; h < 24; h++) {
        for (int m = 0; m < 60; m++) {
            for (int s = 0; s < 60; s++) {
                // Limpiar consola (funciona en la mayoría de sistemas)
                cout << "\r" << setfill('0') << setw(2) << h << ":"
                     << setw(2) << m << ":"
                     << setw(2) << s << flush;

                // Pausa de 1 segundo
                this_thread::sleep_for(chrono::seconds(1));
            }
        }
    }
    return 0;
}
