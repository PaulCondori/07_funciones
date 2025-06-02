#include <iostream>
using namespace std;

int generarFibonacci(int n) {
    int a = 0, b = 1, suma = 0;

    cout << "Serie de Fibonacci con " << n << " terminos: " << endl;
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
    cout << "Ingrese la cantidad de terminos de Fibonacci a generar: ";
    cin >> cantidad;
    cout << "--------------------------------" << endl;
    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor que cero." << endl;
    } else {
        int sumaTotal = generarFibonacci(cantidad);
        cout << "Suma de los terminos generados: " << endl << sumaTotal << endl;
    }

    return 0;
}

