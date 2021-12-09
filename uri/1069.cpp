#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int cases;
    string items;
    int counter = 0;

    cin >> cases;

    for (int i = 0; i < cases; i++) {
        stack<char> itemType;

        cin >> items;

        for (int j = 0; j < items.length(); j++) {
            if (items[j] == '<')
                itemType.push(items[j]);
            else if (!itemType.empty() && items[j] == '>') {
                if (itemType.top() == '<') {
                    itemType.pop();
                    counter++;
                }
            }
        }

        cout << counter << endl;
        counter = 0;
    }
}