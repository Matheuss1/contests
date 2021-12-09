#include <bits/stdc++.h>
using namespace std;

int main()
{
    string kboardSet("`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./");

    map<char, char> kboardMap;

    for (std::string::size_type i = 0; i < kboardSet.size(); i++) {
        if (i != 0) {
            kboardMap[kboardSet[i]] = kboardSet[i - 1];
        }
    }

    string str;

    while ( getline(cin, str) ) {
        for (std::string::size_type i = 0; i < str.size(); i++) {
            if (str[i] == ' ') {
                cout << ' ';
            }
            else {
                cout << kboardMap[str[i]];
            }
        }
        str.clear();
        cout << endl;

    }
}