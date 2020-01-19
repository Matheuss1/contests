#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i;
    cin >> n >> k;
    vector<int> classificacao(n);

    for (i = 0; i < n; i++) {
        cin >> classificacao[i];
    }
    sort(classificacao.begin(), classificacao.end());

    int counter = k;    
    i = n - k;
    while (true) {
        if (classificacao[i - 1] == classificacao[i]) {
            counter += 1;
            i -= 1;
        }
        else break;
    }
    cout << counter<< endl;
}