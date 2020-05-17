#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define RESERVE 2000000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        vector<int> ageSort;
        ageSort.reserve(RESERVE);
        ll a;
        cin >> a;

        if (a == 0)
            break;

        for (int i = 0; i < a; i++) {
            int b; 
            cin >> b;
            ageSort.push_back(b);
        }

        sort(ageSort.begin(), ageSort.end());

        for (int i = 0; i < a; i++) {
            if (i == a - 1) {
                cout << ageSort.at(i) << "\n";
            }
            else {
                cout << ageSort.at(i) << " ";
            }

        }
    }
    
}