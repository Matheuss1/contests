#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    vector<long long> arr;
    arr.reserve(200000);
    
    int i;
    long long num;
    for (i = 0; i < a; i++) {
        cin >> num;
        arr.push_back(num);
    }
    for (i = 0; i < a; i++) {
        cin >> num;
        arr.at(i) -= num;
    }

    sort(arr.begin(), arr.end());

    long long counter = 0;
    for (i = 0; i < a; i++) {
        if (arr.at(i) > 0) {
            auto it = lower_bound(arr.begin(), arr.begin() + i, -arr.at(i) + 1);
            counter += arr.begin() + i - it;
        }
    }

    cout << counter << "\n";
}