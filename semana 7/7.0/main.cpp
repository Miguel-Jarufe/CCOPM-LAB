#include <iostream>

using namespace std;

long sumar(int arr[], int tam) {
    if (tam == 0)
        return 0;
    else
        return arr[tam - 1] + sumar(arr, tam - 1);
}

int main(){

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    cout << "Suma recursiva: " << sumar(arr, 5) << endl;
    return 0;
}
