#include <iostream>

using namespace std;

int main()
{
    char val ;
    cout << "Ingrese un caracter por favor: ";
    cin >> val;

    cout << "El valor ingresado es: " << val << endl;
    int num = static_cast<int>(val);
    cout << "El valor numerico es: " << num << endl;

    /**
    * Escribir un programa que indique si el valor ingresado es una LETRA MAYUSCULA
    */
    if(num >= 65 && num <= 90) {
        cout << "Es una letra mayuscula" << endl;
    } else {
        cout << "No ES una letra mayuscula" << endl;
    }
    /**
    * Escribir un programa que indique si el valor ingresado es una
    * LETRA MAYUSCULA o una LETRA MINUSCULA
    */

    return 0;
}
