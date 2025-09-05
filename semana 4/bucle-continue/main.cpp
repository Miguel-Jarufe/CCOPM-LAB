#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    cout << "Probando la sentencia break" << endl;
    while (i<10){
        if(i == 5)
            break;
        cout << i << endl;
        i= i + 1;
    }
    return 0;
}

    /**
    * continue
    */

