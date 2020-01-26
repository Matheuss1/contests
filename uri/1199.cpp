#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

int main()
{
    string s;
    stringstream x;

    while(true) {
        cin >> s;

        if (s[0] == '-')
            break;

        if (s[1] == 'x')
            cout << stol(s.c_str(), nullptr, 16) << endl;
        else {
            x << "0x" << uppercase << hex << stol(s) << endl;
            x >> s;
            cout << s << endl;
        }
    }

}