#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;

    cin >> a;

    string aux;

    cin >> aux;

    int i = 0;
    int sum = 0;

    while (i != a) {
        int temp = 0;
        for (int j = i + 1; j < a; j++) {
            if (aux[j] != aux[i]) {
                sum += j - i - 1;
                i = j;
                temp = 1;
                break;
            }
            if (j == a - 1) {
                sum += a - i - 1;
                i = j;
            }
        }

        if (!temp) {
            i++;
        }
    }

    cout << sum << endl;
}