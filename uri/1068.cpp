#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string expression;

    while(getline(cin, expression)) {
        stack<char> x;
        int i = 0, flag = 0;

        while(i < expression.size()) {
            if (expression[i] == ')') {
                while (!x.empty() && x.top() != '(') {
                    x.pop();
                }

                if (x.empty()) {
                    cout << "incorrect" << endl;
                    flag = 1;
                    break;
                }
                else {
                    x.pop();
                    i++;
                }
            }
            else {
                x.push(expression[i]);
                i++;
            }
        }

        while (!x.empty()) {
            if (x.top() == '(') {
                cout << "incorrect" << endl;
                break;
            }
            else {
                x.pop();
                flag = 0;
            }
        }

        if (x.empty() && flag == 0)
            cout << "correct" << endl;
    }
}