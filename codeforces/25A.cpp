#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int even = 0, odd = 0;
    cin >> n;
    int numbers[n];
    
    for (i = 0; i < n; i++) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0){
            ++even;
        } else {
            ++odd;
        }
    }
    if (odd > even) {
        for (i = 0; i < n; i++) {
            if (numbers[i] % 2 == 0) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    else {
        for (i = 0; i < n; i++) {
            if (numbers[i] % 2 != 0) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}