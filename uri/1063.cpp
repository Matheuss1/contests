#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int a, b, i, j;

    while(true) {
        cin >> a;
        if (a == 0)
            break;
        
        b = a;
        
        vector<char> input(a);
        vector<char> output(a);
        stack<char> station;

        for (i = 0; i < a; i++) {
            cin >> input[i];           
        }

        for (i = 0; i < a; i++) {
            cin >> output[i];
        }

        i = j = 0;

        while (true) {
            if (i == a)
                break;

            if (input[i] == output[j]) {
                cout << "IR";

                i++;
                j++;

                while (!station.empty() && station.top() == output[j]) {
                    j++;
                    station.pop();

                    cout << "R";
                }
            }
            else {
                station.push(input[i]);
                cout << "I";

                i++;
            }
        }

        if (!station.empty())
            cout << " Impossible" << endl;
        else
            cout << endl;
    }
}