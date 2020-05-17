#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,cnt = 0, cntA = 0, cntB = 0;
    string str;

    cin >> a >> str;

    for (int i = 0; i < a; i++) {
        if (str[i] == 'a')
            cntA++;
        else
            cntB++;
        
        if ((i + 1) % 2 == 0 ) {
            if (cntA > cntB) {
                str[i] = 'b';
                cntB++;
                cntA--;
                cnt++;
            }
            else if (cntB > cntA) {
                str[i] = 'a';
                cntA++;
                cntB--;
                cnt++;
            }
        }
    }

    cout << cnt << "\n" << str << "\n";
}

