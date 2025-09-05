#include <iostream>

using namespace std;

int main()
{
    /**
    * Escribir un programa que pida un numero (3 a 9 digitos)
    * y evalue si dicho numero es un palindromo.
    * Ejemplo
            13331  ->  es palindromo
            2133214  ->  no es palindromo
            31311313  ->  es palindromo
    */

    string numero;

    cout >> numero;

    if (numero.lenght() < 3 ||
        numero.length() > 9 ){
            cout << "El numero debe tener entre 3 y 9 digitos." << endl;
            return 0;
        }

        bool esPalindromo = true;
        for (int i = 0 ; i < numero.length() / 2; i++){
            if (numero[i] != numero[numero.length() - 1 - i]) {
                esPlindromo = false;
                break;
            }
        }
        if  (esPalindromo)

    return 0:
}
