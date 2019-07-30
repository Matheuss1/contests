#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cases, i, num, counter;
    cin >> cases;
    vector<int> vet;

    while(cases != 0) {
        counter = 0;
        if (cases == 2) {
            int a, b;
            cin >> a >> b;
            cout << 2 << endl;
            cin >> cases;
            continue;
        }

        for (i = 0; i < cases; i++) {
            cin >> num;
            vet.push_back(num);
        }
        vet.push_back(*vet.begin());
        vet.push_back(*(vet.begin() + 1));

        for (i = 1; i <= cases; i++) {
            if (vet[i] < vet[i - 1] && vet[i] < vet[i + 1]) {
                counter += 1;
            }
            else if (vet[i] > vet[i - 1] && vet[i] > vet[i + 1]) {
                counter += 1;
            }
        }
        cout << counter << endl;
        vet.clear();
        cin >> cases;
    }
}