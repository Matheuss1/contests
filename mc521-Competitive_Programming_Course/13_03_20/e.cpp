#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a;

    cin >> a;
    vector<int> nums;

    for (int i = 0; i < a; i++) {
        int b;
        cin >> b;
        nums.push_back(b);
    }

    sort(nums.begin(), nums.end());

    int instability;
    int l = *(nums.end() - 2) - *(nums.begin());
    int m = *(nums.end() - 1) - *(nums.begin() + 1);
   
    l < m ? instability = l : instability = m;

    cout << instability << endl;
}