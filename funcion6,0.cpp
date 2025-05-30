#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}

int main() {
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    cout << "--------------------------------" << endl;
    if (numero <= 0) {
        cout << "Error: El numero debe ser positivo." << endl;
    } else {
        if (esPrimo(numero)) {
            cout << numero << " es un numero primo." << endl;
        } else {
            cout << numero << " no es un numero primo." << endl;
        }
    }

    return 0;
}

