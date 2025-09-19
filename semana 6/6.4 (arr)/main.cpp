#include <iostream>

using namespace std;

int main()
{
    int arr[5];

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

    int sum = 0;
    for(int i = 0; i < 5; i++)
        sum = sum + arr[i];

    cout << "la suma es: " << sum << endl;

    return 0;
}
