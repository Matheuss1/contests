#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    vector<long> seq;
    long n, k;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        long a;
        cin >> a;

        seq.push_back(a);
    }

    sort(seq.begin(), seq.end());
   
    // for (int j = 0; j < seq.size(); j++)
    //     cout << seq.at(j) << " ";
    // cout << endl;

    int b = seq.size();

    if (b > k) {
        if (k > 0) {
            if (seq.at(k - 1) != seq.at(k))
                cout << seq.at(k - 1) << endl;
            else
                cout << -1 << endl;
        }
        else if(seq.at(0) - 1 >= 1)
            cout << seq.at(0) - 1 << endl;
        else 
            cout << -1 << endl;
    }
    else
        cout << seq.at(k -1) << endl;
}
