// THIS DOESN'T WORK IN URI, JUST IN NEPSACADEMY JUDGE (AND I DON'T KNOW WHY)
#include <bits/stdc++.h>
using namespace std;

int despojado(long n);

int main()
{
    long n, i;
    int counter = 0;
    cin >> n;
    
    for (i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            counter += despojado(i);
            if (n/i > i)
                counter += despojado(n/i);
        }
    }
    cout << counter << endl;
}

int despojado(long n)
{
    int i, prev = 0, aux = 0;
    while (n % 2 == 0) {
        if (prev == 2)
            return 0;
        prev = 2;
        aux += 1;
        n = n / 2;
    }
    for (i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            if (prev == i) {
                return 0;
            }
            prev = i;
            aux += 1;
            n = n / i;
        }
    }
    if (n > 2 && prev != n) {
        aux += 1;
    }

    if (aux > 1) {
        return 1;
    }
    return 0;
}