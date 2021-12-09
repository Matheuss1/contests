#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, n;
    
    while (true) {
        cin >> b >> n;
        
        if (b == 0)
            break;

        vector<int> moneyStorage(b);

        for (int i = 0; i < b; i++) {
            int money;
            cin >> money;

            moneyStorage[i] = money;
        }

        for (int i = 0; i < n; i++) {
            int d, v, c;

            cin >> d >> c >> v;

            moneyStorage[d - 1] -= v;
            moneyStorage[c - 1] += v;
        }

        int i = 0;
        for (i ; i < b; i++) {
            if (moneyStorage[i] < 0) {
                cout << 'N' << endl;

                break;
            }
        }

        if (i == b)
            cout << "S" << endl;
        
    }
}