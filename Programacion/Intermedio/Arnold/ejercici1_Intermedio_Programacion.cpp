// Copa Hello World - Programación - Intermedio 1 (C++)
// Reemplaza cada ___N___ para que el programa funcione. No cambies el resto del código.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int numeros[100];
    int i = 0;
    while (i < n) {
        cin >> numeros[i];
        i = i + 1;
    }

    int mayor = numeros[___1___];
    i = 1;

    while (i ___2___ n) {
        if (numeros[i] ___3___ mayor) {
            mayor = numeros[___4___];
        }
        i = i + 1;
    }

    cout << mayor << endl;
    return 0;
}
