#include <bits/stdc++.h>
using namespace std;

int main()
{
    int errors;
    cin >> errors;
    
    vector<long> first(errors);
    vector<long> second(errors - 1);
    vector<long> third(errors - 2);
    vector<long> results(2);

    int i;
    for (i = 0; i < first.size(); i++) {
        long a;
        cin >> a;
        first[i] = a;
    }

    for (i = 0; i < second.size(); i++) {
        long a;
        cin >> a;
        second[i] = a;
    }

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    set_difference(first.begin(), first.end(),
                    second.begin(), second.end(), results.begin());

    for (i = 0; i < third.size(); i++) {
        long a;
        cin >> a;
        third[i] = a;
    }

    sort(third.begin(), third.end());
    set_difference(second.begin(), second.end(),
                    third.begin(), third.end(), results.begin() + 1);

    cout << results[0] << endl << results[1] << endl;
}


