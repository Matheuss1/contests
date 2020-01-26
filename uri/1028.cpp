#include <iostream>


using namespace std;

int main()
{
    int n, divider, dividend;
    int i, temp, remainder;
    int a, b;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> a >> b;

        divider = min(a, b);
        dividend = max(a, b);

        remainder = dividend % divider;

        while (remainder) {
            dividend = divider;
            divider = remainder;
            
            remainder = dividend % divider;
        }
        cout << divider << endl;
    }
}
