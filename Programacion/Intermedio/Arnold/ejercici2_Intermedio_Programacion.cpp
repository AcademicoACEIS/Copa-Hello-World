// Copa Hello World - Programación - Intermedio 2 (C++)
// Reemplaza cada ___N___ para que el programa funcione. No cambies el resto del código.

#include <iostream>
using namespace std;

int es_primo(int n) {
    if (n < 2) {
        return 0;
    }
    int i = ___1___;
    while (i * i ___2___ n) {
        if (n ___3___ i == 0) {
            return ___4___;
        }
        i = i + 1;
    }
    return ___5___;
}

int main() {
    int limite;
    cin >> limite;

    int contador = 0;
    int numero = 1;

    while (numero <= limite) {
        if (es_primo(numero) == 1) {
            contador = contador + 1;
        }
        numero = numero + 1;
    }

    cout << contador << endl;
    return 0;
}
