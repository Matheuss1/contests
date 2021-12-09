#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;

int main()
{
    ll t, m, n;

    cin >> t >> m >> n;
    
    vector<vector<ll> > memoTable(t, vector<ll>(n - m + 1, 0));

    ll sum = 0;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < (n - m + 1); j++) {
            if (i == 0) {
                continue;
            }

            if (i == 1) {
                if (j == 0 || j == (n - m)) {
                    memoTable[i][j] = 1;
                }
                else {
                    memoTable[i][j] = 2;
                }

                continue;
            }

            ll prevLower = (j - 1 < 0) ? 0 : memoTable[i - 1][j - 1] % MOD;
            ll prevUpper = (j + 1 > (n - m)) ? 0 : memoTable[i - 1][j + 1] % MOD;

            memoTable[i][j] = prevLower % MOD + prevUpper % MOD;

            if (i == t-1) {
                sum += memoTable[i][j];
            }
        }
    }

    cout << sum % MOD << endl;
}