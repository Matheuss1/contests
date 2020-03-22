#include <iostream>

using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        char a = 'a';
        int n, k, j;

        cin >> n >> k;

        for (j = 0; j < k - 1; j++) {
            for (int o = 0; o < n / k; o++)
                cout << a;
            
            a = int(a) + 1;
        }
        for (int o = 0; o < (n % k) + (n / k) ; o++)
            cout << a;
        cout << endl;
    }
}