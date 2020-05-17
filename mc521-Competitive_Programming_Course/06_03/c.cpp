#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    int i, j;

    cin >> a >> b;

    while (a <= b) {
        string aux = to_string(a);
        int size = aux.length();
        int flag = 0;

        // could be done using a set instead 2 nested fors
        for (i = 0; i < size; i++) {
            for (j = 0; j < size; j++) {
                if (aux[i] == aux[j] && j != i) {
                    flag = 1;
                    break;
                }
            }

            if (flag) {
                break;
            }
        }

        if (!flag) {
            cout << a << endl;
            break;
        }
        
        a += 1;
    }

    if (a > b)
        cout << -1 << endl;
}