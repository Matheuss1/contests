#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    int counter = 1, max = 1;
    
    ll current, prev;

    cin >> prev;
    for (int i = 1; i < a; i++) {
        cin >> current;
        if (current >= prev) {
            counter += 1;

            if (counter > max)
                max = counter;
        }
        else {
            counter = 1;
        }

        prev = current;
        
    }

    cout << max << "\n";
}
