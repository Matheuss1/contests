#include <bits/stdc++.h>
using namespace std;    

int main()
{
    int n, t;

    cin >> n >> t;

    vector<int> board(n - 1);

    for (int i = 0; i < n - 1; i++) {
        int a;

        cin >> a;
        board[i] = a;
    }

    int i = 0, next = 0;

    while (true) {
        next += board[i];

        if (next == t - 1) {
            cout << "YES" << endl;
            break;
        }
        else if (next > t || next > n) {
            cout << "NO" << endl;
            break;
        }

        i = next;
    }
}