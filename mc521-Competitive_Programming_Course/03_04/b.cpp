#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    
    while (true) {
        int arr[10] = {0};
        a = to_string(stoi(a) + 1);

        int i;
        for (i = 0; i < a.size(); i++) {
            arr[a[i] - '0'] += 1;

            if (arr[a[i] - '0'] > 1) {
                break;
            }
        }

        if (i == a.size()) {
            cout << a << endl;
            break;
        }
    }
}