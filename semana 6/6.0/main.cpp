#include <iostream>

using namespace std;

int main() {
    string cad = "ciencia de la computacion";
    char car = 'i';

//    cout << "Ingrese una cadena: ";
//    getline(cin, cad)


    int cont = 0;
    for (int i = 0; i < cad.length(); i++){
        if (cad.at(i) == car){
            cont++;
        }
    }
    cout << cont << endl;
    return 0;
}
/*
{
    string texto;
    cout << "ingrese una palabra o frase: ";
    getline (cin, texto);

    for (int i=0; i< texto.length(); i++) {
        char actual = texto[i];
        if (actual == '')
    continue;

        int oontador = 0;
        for (int j = 0; j<texto.length(); j++){
            if (texto[j] == actual) {
                    contador++;
            }
        }
        bool yaMostrado = false;
        for (int k = 0; k < i; k++) {
            if (texto[k] == actual){
                yaMostrado = true
                break;
            }
        }
        if (!yaMostrado){
            cout << "El caracter " << actual << "aparece " << contador << " veces ";
        }
    }
}
*/
