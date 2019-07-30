#include <iostream>
using namespace std;
int main()
{
    int n, num, i, j, temp, counter;
    while(true) {
        cin >> n;
        if (n == 0)
            break;
        for (j = 0; j < n; j++) {
            counter = 0;
            for (i = 0; i < 5; i++) {
                cin >> num;
                if (num <= 127) {
                    temp = i;
                    counter += 1;
                }
            }
            if (counter > 1 || counter == 0) {
                cout << "*" << endl;
            }
            else {
                cout << (char) (65 + temp) << endl;
            }
        }
    }
}