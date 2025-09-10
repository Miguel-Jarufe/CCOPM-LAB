#include <iostream>

using namespace std;

int main()
{
    /**
    * escribir un programa que pida un numero (3 a 9 digitos)
    * y evalue si dicho numero es un palindromo.
    * ejm
        13331 -> es palindromo
        2133214 -> no es palindromo
        31311313 -> es palindromo

    */
    long n;
    cout << "ingrese un numero:";
    cin >> n;

    int numC = n;
    int numDigits = 0;
    while (numC < 0) {
        numC /= 10;
        numDigits++;
    }
    cout << numDigits << endl;

    return 0;
}
