#include <iostream>

using namespace std;

/**
* recursividad: cuando una funcion se llama a si misma.
*
*   n! = n * (n-1)!
*   5! = 5 * (4) !
              4 * (3)!
                    3 * (2)!
*
*/
long long factorial (long n) {
    /**
    * Primero se define el CASO BASE
    * posteriormente. se define el PASO RECURSIVO.
    */
    if (n == 1)
        return 1;
    else
        return n * factorial (n-1);
}

/**
* Fibonacci
* fib(n) = fib(n-1) + fib(n-2)
*      fib(0) = 1
*      fib(1) = 1

*   1 1 2 3 5 8 13 ...
*/

long long fibonacci(long n){
    if(n == 1 || n == 0)
       return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

long long contarDigitos(long n) {
    if(n < 10)
        return 1;
    else
        return 1 + contarDigitos(n/10);
}

/**
* De forma recursiva dado un numero verificar si es capicua
*/

long long esCapicua(long long n){
    if (n < 10) return 1;
    long long divisor = 1;
    while (n / divisor >= 10) {
        divisor *= 10;
    }
    long long primer = n / divisor;
    long long ultimo = n % 10;
    if (primer != ultimo) return 0;
    long long resto = (n % divisor) / 10;
    return esCapicua(resto);
}

int main()
{
    cout << factorial(5) << endl;
    cout << fibonacci(6) << endl;
    cout << contarDigitos(854) << endl;
    cout << esCapicua(12321) << endl;
    return 0;
}
