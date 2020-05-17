#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
    int a;

    cin >> a;

    vector<ll> nums(a);
    vector<ll> prefix(a);
    vector<ll> suffix(a);
    deque<int> idxs1, idxs2;
    map<int, int> pos;

    int i;
    ll sum = 0;
    for (i = 0; i < a; i++) {
        ll num;

        cin >> num;
        nums[i] = num;
        sum += num;
    }

    if (sum % 3 != 0)
        cout << 0 << endl;
    else {
        ll tempsum = 0;
        for (i = 0; i < a - 2; i++) {
            tempsum += nums[i];
            prefix[i] = tempsum;

            if (tempsum == sum / 3)
                idxs1.push_back(i);
        }

        tempsum = 0;
        for (i = a - 1; i >= 2; i--) {
            tempsum += nums[i];
            suffix[i] = tempsum;

            if (tempsum == sum / 3)  {
                idxs2.push_front(i);
                pos[i] = idxs2.size() - 1;
            }
        }
        
        ll counter = 0;
        for (i = 0; i < idxs1.size(); i++) {
            auto it = lower_bound(idxs2.begin(), idxs2.end(), i + 2);

            counter += idxs2.end() - it;
        }

        cout << counter << endl;
    }
}
