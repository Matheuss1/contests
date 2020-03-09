#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int gcd(int a, int b);

int main()
{
    int cases, a, b, c;

    cin >> cases;

    for (int i = 0; i < cases; i++) {
        cin >> a >> b >> c;
        if (c % gcd(a, b) == 0)
            cout << "Case " << i + 1 << ": Yes" << endl;
        else if (i < cases)
            cout << "Case " << i + 1 << ": No" << endl;
        else
            cout << "Case " << i + 1 << ": No";
    }
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    
    return gcd(b % a, a);
}