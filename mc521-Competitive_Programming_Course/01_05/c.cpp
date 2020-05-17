#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int t, n;

    cin >> t;
    for (int i = 0; i < t; i++) {
        bool aux = true;
        cin >> n;
        vector<int> ingredients;
        int minn = 1001;

        int a, j, k;
        for (j = 0; j < n; j++) {
            cin >> a;
            ingredients.push_back(a);
            if (a < minn)
                minn = a;
        }

        for (j = a; j > 0; j--) {
            aux = true;
            for (k = 0; k < n; k++) {
                if (ingredients.at(k) % j != 0) {
                    aux = false;
                    break;
                }
            }

            if (aux) {
                for (k = 0; k < n; k++) {
                    cout << ingredients.at(k) / j << " ";
                }
                cout << "\n";
                break;
            }
        }
    }
}