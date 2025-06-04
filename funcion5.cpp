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

int sonAmigos(int a, int b) {
    if (sumaDivisores(a) == b && sumaDivisores(b) == a)
        return 1; 
    else
        return 0; 
}

int main() {
    int x, y;
    cout <<"Ingrese los numeros para verificar: " << endl;
    cin >> x >> y;

    if (sonAmigos(x, y))
        cout << "Son amigos" << endl;
    else
        cout << "No son amigos" << endl;

    return 0;
}

