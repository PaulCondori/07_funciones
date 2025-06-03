#include <iostream>
using namespace std;

long long factorial(int num) {
    long long resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

long long combinatorio(int m, int n) {
    if (n > m) return 0;
    return factorial(m) / (factorial(n) * factorial(m - n));
}

int main() {
    int m, n;

    do {
        cout << "Ingrese el valor de m (numero positivo): ";
        cin >> m;
    } while (m < 0);

    do {
        cout << "Ingrese el valor de n (numero positivo): ";
        cin >> n;
    } while (n < 0);
    cout << "--------------------------------" << endl;
    if (n > m) {
        cout << "Error: n no puede ser mayor que m." << endl;
        return 1;
    }

    long long resultado = combinatorio(m, n);
    cout << "C(" << m << ", " << n << ") = " << resultado << endl;

    return 0;
}

