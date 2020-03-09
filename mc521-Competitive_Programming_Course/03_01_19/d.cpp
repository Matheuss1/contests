#include <iostream>

using namespace std;

int main()
{
    int size;

    while (true) {
        int size, right = 0, down = 0;
        int sum = 0;

        cin >> size;
        
        if (!size)
            break;

        while (size > 0) {
            int temp = 1 + right;
            sum += temp;
            sum += down * temp;
            right = down += 1;
            size -= 1;
        }

        cout << sum << endl;
    }
}