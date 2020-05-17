#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b, c;

        cin >> a >> b;

        int first;

        cin >> first;

        for (int j = 1; j < a; j++) {
            cin >> c;

            while (c > 0 && first < b) {
                c -= 1;
                first += 1;
            }
        }

        cout << first << endl;
    }
}