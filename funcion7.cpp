#include <iostream>
using namespace std;

int factorial(int num) {
    int resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int combinatorio(int m, int n) {
    return factorial(m) / (factorial(n) * factorial(m - n));
}

int main() {
    int m, n;

    do {
        cout << "Ingrese un valor positivo para m: ";
        cin >> m;
    } while (m < 0);

    do {
        cout << "Ingrese un valor positivo para n: ";
        cin >> n;
    } while (n < 0);

    int resultado = combinatorio(m, n);
    cout << "C(" << m << ", " << n << ") = " << resultado << endl;

    return 0;
}

