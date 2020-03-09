#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num;

    cin >> num;

    int l = 0, r = 0;

    for (int i = 0; i < num; i++) {
        char a;

        cin >> a;

        if (a == 'L')
            l -= 1;
        else
            r += 1;
    }

    int x, y;

    x = max(l, r);
    y = min(l, r);

    cout << x - y + 1 << endl;
}
