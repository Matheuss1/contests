#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        ll a, b, k;
        cin >> a >> b >> k;

        if (k % 2 == 0) {
            cout << (a - b) * k / 2 << "\n"; 
        }
        else {
            cout << (a * (k / 2 + 1)) - (b * (k / 2)) << "\n";
        }

    }

}