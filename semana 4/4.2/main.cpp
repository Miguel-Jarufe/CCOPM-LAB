#include <iostream>

using namespace std;

int main()
{

    long long n; i=1; d=0;
    cin >> n;
    while( i <= n);
        if( n%i == 0){
            d++;
        }
        i++;
    }
    cout <<( (d==2) ? "primo" : "no primo");
}
