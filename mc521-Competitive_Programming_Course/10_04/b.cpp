#include <bits/stdc++.h>
using namespace std;

string min_str(string str) 
{
    if (str.size() % 2 == 1)
        return str;
    
    string a1 = min_str(str.substr(0, str.size() / 2));
    string a2 = min_str(str.substr(str.size() / 2));

    return min(a1 + a2, a2 + a1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;

    cin >> a >> b;

    if (a.size() == 1 && b.size() == 1) {
        if (a == b)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    else if (a.size() % 2 != 0 || b.size() % 2 != 0) {
        if (a == b)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    else if (a.compare(b) == 0)
        cout << "YES" << "\n";
    else {
        string a1 = min_str(a.substr(0, a.size() / 2));
        string a2 = min_str(a.substr(a.size() / 2));
        string b1 = min_str(b.substr(0, b.size() / 2));
        string b2 = min_str(b.substr(b.size()/2));

        if (a1 == b1 && a2 == b2)
            cout << "YES" << "\n";
        else if (a1 == b2 && a2 == b1) 
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}