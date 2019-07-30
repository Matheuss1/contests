#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cases, n, k, i, j, index = 0;
    cin >> cases;
    vector<int> men;

    for (i = 0; i < cases; i++) {
        cin >> n >> k;
        for (j = 0; j < n; j++) {
            men.push_back(j+1);
        }
        vector<int>::iterator it = men.begin();
        while (men.size() != 1) {
            index += k - 1;
            while (index >= men.size()) {
                if (index % men.size() == 0) {
                    index = index - men.size();
                    continue;
                }
                index = index % men.size();
            }
            // cout << men.at(0 + index) << " ";
            men.erase(it + index);
        }
        // cout << endl;
        cout << "Case " << i + 1 << ": " << men[0] << endl;
        men.clear();
        index = 0;
    }    
}