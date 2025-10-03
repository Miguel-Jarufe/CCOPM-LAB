#include <iostream>

using namespace std;

int contarCaracteres(char *ptr, int char){
    int cont = 0;
    while (*ptr != '0'){
        if (*ptr == car)
            cont++;
        ptr++;
    }
    return cont;
}

int main()
{
    char cad[] = "ciencia de la computacion";
    cout << contarCaracteres(cad, 'e');//2
    return 0;
}
