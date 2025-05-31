#include <iostream>
using namespace std;

int obtenerCociente(int a, int b) {
    int mayor = (a > b) ? a : b;
    int menor = (a > b) ? b : a;

    int cociente = 0;
    while (mayor >= menor) {
        mayor -= menor;
        cociente++;
    }
    return cociente;
}

int obtenerResto(int a, int b) {
    int mayor = (a > b) ? a : b;
    int menor = (a > b) ? b : a;

    while (mayor >= menor) {
        mayor -= menor;
    }
    return mayor;
}

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros enteros positivos: ";
    cin >> num1 >> num2;

    if (num1 <= 0 || num2 <= 0) {
        cout << "Error: los numeros deben ser positivos." << endl;
        return 1;
    }

    int cociente = obtenerCociente(num1, num2);
    int resto = obtenerResto(num1, num2);

    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;

    return 0;
}

