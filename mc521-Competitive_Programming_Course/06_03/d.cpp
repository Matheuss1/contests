#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums, sorted;

    int a, i;

    cin >> a;

    for (i = 0; i < a; i++) {
        int b;

        cin >> b;
        nums.push_back(b); 
        sorted.push_back(b);
    }

    sort(sorted.begin(), sorted.end());

    set<int> temp;

    int aux = a;

    for (i = 0; i < a; i++) {
        if (nums.at(i) != sorted.at(aux - 1)) {
            temp.insert(nums.at(i));
            cout << endl;
        }
        else {
            cout << nums.at(i) << " ";

            aux -= 1;
            
            while (!temp.empty() && aux != 0 && (temp.find(sorted.at(aux - 1)) != temp.end())) {

                cout << sorted.at(aux - 1) << " ";

                if (aux != 0)
                    aux -= 1;
            }

            cout << endl;
        }
    }
}
