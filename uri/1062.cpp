#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, i;

    while (true)  {
        cin >> a;
        if (a == 0) break;

        b = a;

        while(true) {
            stack<int> train;
            stack<int> railCar;

            cin >> c;
            if (c == 0)
                break;
            else
                train.push(c);

            for (i = 0; i < a - 1; i++) {
                cin >> c;
                train.push(c);
            }

            while (!train.empty()) {
                c = train.top();
                train.pop();

                if (c == a) {
                    a -= 1;

                    while (!railCar.empty() && railCar.top() == a) {
                        a -= 1;
                        railCar.pop();
                    }
                }
                else {
                    railCar.push(c);
                }
            }

            if (railCar.empty())
                cout << "Yes" << endl;
            else
                cout <<  "No" << endl;
            
            a = b;
        }
        
        cout << endl;
    }
}