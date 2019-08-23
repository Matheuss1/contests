#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    while (true) {
        string temp;
        getline(cin, temp);
        if(temp == "*")
            break;
        istringstream iss(temp);
        vector<string> words( (istream_iterator<string>(iss)),
                                  istream_iterator<string>());
        char a = toupper( (*(words.begin()))[0] );
        int aux = 0;
        for(vector<string>::iterator it = words.begin(); it != words.end(); it++) {
            if (toupper( (*it)[0] ) != a) {
                cout << "N" << endl;
                aux = 1;
                break;
            }
        }
        if (aux == 1) {
            continue;
        }
        else {
            cout << "Y" << endl;
        }
    }
}
