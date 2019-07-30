#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    while(1) {
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 + y1 + y2 + x2 == 0) 
            break;

        if (x1 == x2 && y1 == y2)
            cout << 0 << endl;
        else if (x1 == x2 or y1 == y2) {
            cout << 1 << endl;
        }
        else if (x1 < x2) {
            if (y1 < y2) {
                if (y2 - y1 == x2 - x1)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }
            else {
                if (y1 - y2 == x2 - x1)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            } 
        }
        else if (x1 > x2){
            if (y1 < y2) {
                if (y2 - y1 == x1 - x2)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }
            else {
                if (y1 - y2 == x1 - x2)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            } 
        }
        
    }
}