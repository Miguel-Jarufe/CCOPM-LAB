#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};

    cout << arr << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;
    cout << &arr[5] << endl;

    int* ptr = arr;
    cout << *ptr << endl; //1
    ptr++;
    cout << *ptr << endl; //2
    ptr++;
    cout << *ptr << endl; //3
    ptr++;
    cout << *ptr << endl; //4
    ptr++;
    cout << *ptr << endl; //5
    ptr++;
    //por lo tanto, se puede recorrer los elementos de un arreglo usando un puntero

    int* ptr2 = arr;
    for(int i = 0; i < 5; i++, ptr2++)
        cout << *ptr2 << " ";
    cout << endl;

    cout << *(arr+0) << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;
    cout << *(arr+4) << endl;

    int *ptr3 = arr+4;
    for(int i = 0; i < 5; i++, ptr3--)
        cout << *ptr3 << " ";
    cout << endl;

    cout << "____usando while______" << endl;
    int *ptr4 = arr;
    while(ptr4 < (arr+5)){
        cout << *ptr4 << " ";
        ptr4++;
    }

    cout << endl;
    int *ptr5 = arr+4;
    while(ptr5 - arr)
    return 0;
}
