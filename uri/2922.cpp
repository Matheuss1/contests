#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b) {
        if (a == b) {
            cout << 0 << endl;
        }
        else {
            cout << max(a,b) - min(a,b) - 1 << endl;
        }
    }
}