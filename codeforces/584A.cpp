#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, number;
    int aux;
    cin >> a;
    cin >> b;

    if (b == 10) {
        if (a == 1) {
            cout << -1 << endl;
        }
        else {
            cout << 1;
            for (aux = 0; aux < a - 1; aux++){
            cout << 0;
            }
            cout << endl;
        }
    }
    else {
        for (aux = 0; aux < a; aux++) {
            cout << b; 
        }
        cout << endl;
    }
}