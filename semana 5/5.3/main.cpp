#include <iostream>

using namespace std;

int contarDigitos(int n) {
    if (n == 0) return 1;
    if (n < 0) n = -n;

    int contador = 0;
    while (n > 0) {
        n /= 10;

        contador++;
    }
    return contador;
}
int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "El numero tiene " << contarDigitos(numero) << " digitos.";
    return 0;
}
