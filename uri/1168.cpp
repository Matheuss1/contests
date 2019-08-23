#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[] = {2, 5, 5, 4, 5, 6, 3, 7, 6};
    int n, i, j;
    int counter = 0, num;
    string chars;

    cin >> n;
    cin.ignore();
    for (i = 0; i < n; i++) {
        getline(cin, chars);
        for (j = 0; j < chars.length(); j++) {
            num = chars[j] -'0';
            if (num == 0) {
                counter += 6;
            }
            else{
                counter += arr[num - 1];
            }
        }
        cout << counter << " leds" << endl;
        counter = 0;
    }
}