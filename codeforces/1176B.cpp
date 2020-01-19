#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    cin >> a;

    for (int i = 0; i < a; i++) {
        cin >> b;

        vector<int> arr;
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;

        for (int j = 0; j < b; j++) {
            int c;
            cin >> c;
            
            if (c % 3 == 1)
                cnt1++;
            else if (c % 3 == 2)
                cnt2++;
            else
                cnt3++;
        }

        cnt3 += (max(cnt1, cnt2) - min(cnt1, cnt2)) / 3;
        
        cout << min(cnt1, cnt2) + cnt3 << endl;
    }
}