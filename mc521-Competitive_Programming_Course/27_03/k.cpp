#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int even = 0, odd = 0;
    int index1, index2;

    for (int i = 0; i < n; i++)
    {
        int a;

        cin >> a;

        if ( a % 2 == 0) {
            index1 = i + 1;
            even += 1;
        }
        else {
            index2 = i + 1;
            odd += 1;
        }
    }

    if (even > odd)
        cout << index2 << endl;
    else
        cout << index1 << endl;
}