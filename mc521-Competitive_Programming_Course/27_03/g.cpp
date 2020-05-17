#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;

    int y, x = 1;
    int resy = 0, resx = 0, aux1 = 0;
    int resy2 = 0, resx2 = 0, aux2 = 0;

    while (true) {
        int temp = (a - 4 * x);

        y = temp / 7;

        if (y < 0) {
            aux1 = 1;
            break;
        }

        if (temp % 7 == 0) {
            resy = y;
            resx = x;
        }

        x += 1;
    }    
    
    x = 1;
    while (true) {
        int temp = (a - 7 * x);

        y = temp / 4;

        if (y < 0) {
            aux2 = 1;
            break;
        }

        if (temp % 4 == 0) {
            resy2 = y;
            resx2 = x;
        }

        x += 1;
    }

    if (a == 4)
        cout << 4 << endl;
    else if (a == 7)
        cout << 7 << endl;
    else if (resy > 0 && resy2 > 0) {
        if (resy + resx < resy2 + resx2) {
            for (int i = 0; i < resx; i++)
                cout << 4;
            for (int i = 0; i < resy; i++)
                cout << 7;
            cout << endl;    
        }
        else {
            for (int i = 0; i < resy2; i++)
                cout << 4;
            for (int i = 0; i < resx2; i++)
                cout << 7;
            cout << endl;        
        }
    }
    else if (resy > 0 || resx > 0)  {
        for (int i = 0; i < resx; i++)
            cout << 4;
        for (int i = 0; i < resy; i++)
            cout << 7;
        cout << endl;    
    }
    else if (resy2 > 0 || resx2 > 0) {
        for (int i = 0; i < resy2; i++)
            cout << 4;
        for (int i = 0; i < resx2; i++)
            cout << 7;
        cout << endl;
    }
    else
        cout << -1 << endl;
    
}
