#include <iostream>
using namespace std;

int sumaDivisores(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            suma += i;
    }
    return suma;
}

void verificarAmigos(int a, int b) {
    if (a <= 0 || b <= 0 || a == b) {
    	cout <<"--------------------------------" << endl;
        cout << "Entrada invalida, los numeros deben ser positivos y diferentes." << endl;
        return;
    }
    cout <<"--------------------------------" << endl;
    if (sumaDivisores(a) == b && sumaDivisores(b) == a)
    
        cout << "Son amigos" << endl;
    else
        cout << "No son amigos" << endl;
}

int main() {
    int x, y;
    cout << "Ingrese dos numeros: " << endl;
    cin >> x >> y;
    verificarAmigos(x, y);
    return 0;
}

