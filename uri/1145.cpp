#include <iostream>
using namespace std;
int main()
{
    int x, y;
    int seq, counter = 0;
    cin >> x;
    cin >> y;

    for (seq = 1; seq <= y; seq ++) {
        cout << seq;
        counter++;
        if (counter < x){
            cout << ' ';
        }
        else if (counter == x) {
            cout << endl;
            counter = 0;
        }
    }
    return 0;
}