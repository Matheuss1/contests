#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void primeGen(int* k);

int main()
{
    int n, i, j, index = 0;
    int k;
    vector<int> men;

    while(true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        for (j = 0; j < n; j++) {
            men.push_back(j+1);
        }
        k = 2;
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
            primeGen(&k);
        }
        // cout << endl;
        cout << men[0] << endl;
        men.clear();
        index = 0;
    }    
}

void primeGen(int* k)
{
    int i, j, aux = 1;
    i = *k;
    while (true) {
        i += 1;
        for (j = 2; j <= sqrt(i); j++) {
            if ( i % j == 0) {
                aux = 0;
                break;
            }
        }
        if (aux != 0) {
            *k = i;
            return;
        }
        else {
            aux = 1;
            continue;
        }
    }
}