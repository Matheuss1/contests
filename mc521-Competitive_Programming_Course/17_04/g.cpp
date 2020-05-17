#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int prime_factors(ll n, int primes[] )
{
    while (n % 2 == 0) {
        n /= 2;
        primes[1] += 1;
    }

    for (int i = 3; i <= 5; i = i + 2) {
        while (n % i == 0) {
            primes[i - 1] += 1;
            n /= i;
        }
    }

    if (n != 1)
        return -1;
    return 1;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    for (int i = 0; i < a; i++) {
        int primes[5] = {0};
        ll num;
        cin >> num;

        int aux = prime_factors(num, primes);

        if (aux == -1)
            cout << -1 << "\n";
        else {
            cout << primes[1] + 2 * primes[2] + 3 * primes[4] << "\n";
        }
    }

}