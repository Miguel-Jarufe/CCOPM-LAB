#include <iostream>

using namespace std;

bool esPrimo(int n){
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i+= 2) {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    int numero;
    cout << " Ingrese un numero: ";
    cin >> numero;

    if (esPrimo(numero))
        cout << numero << " es primo.";
    else cout << numero << " no es primo.";
    return 0;
}
