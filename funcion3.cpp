#include <iostream>
using namespace std;

int generarFibonacci(int n) {
    int a = 0, b = 1, suma = 0;

    cout << "Serie de Fibonacci: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        suma += a;
        int siguiente = a + b;
        a = b;
        b = siguiente;
    }
    cout << endl;
    return suma;
}

int main() {
    int cantidad;
    cout << "Ingrese cantidad de terminos: ";
    cin >> cantidad;

    int sumaTotal = generarFibonacci(cantidad);
    cout << "Suma total: " << sumaTotal << endl;

    return 0;
}

