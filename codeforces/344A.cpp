#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int temp = arr[0], groups = 0;
    for (i = 1; i < n; i++) {
        if (arr[i] == temp){
            continue;
        } else {
            groups += 1;
            temp = arr[i];
        }
    }
    groups += 1;
    cout << groups << endl;
}