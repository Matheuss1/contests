#include <iostream>
using namespace std;


int main()
{
    int n, k;

    cin >> n >> k;

    int sum =0;

    int a = n * 2;
    int b = n * 5;
    int c = n * 8;

    if (a % k == a)
        sum += 1;
    else {
        sum += a / k;

        if ( a % k != 0)
            sum += 1;
    }

    if (b % k == b)
        sum += 1;
    else {
        sum += b / k;

        if ( b % k != 0)
            sum += 1;
    }

    if (c % k == c)
        sum += 1;
    else {
        sum += c / k;

        if ( c % k != 0)
            sum += 1;
    }

    cout << sum << endl;
    
}
