#include <iostream>
using namespace std;

void print(int arr[], int tam){
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void invertir(int arr[], int tam) {
    int i = 0, j = tam - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr [j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void imvertirR(int arr[], int tam, int i = 0) {
    if(i > tam){
        return;
    } else {
        int tmp = arr[i];
        arr[i] = arr[tam-1];
        arr[tam-1] = tmp;
        invertirR(arr, tam-1, i+1);
    }
}


int main() {
    int arr[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    print(arr, 5);
    invertir(arr, 5);
    print(arr, 5);

    return 0;
}
