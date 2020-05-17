#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
    string txt;

    int a;

    cin >> a >> txt;

    map<string, int> patterns;
    map<string, int>::iterator it;

    for(int i = 0; i < a - 1; i ++) {
        string sub = txt.substr(i, 2);
        it  = patterns.find(sub);

        if (it == patterns.end()) {
            patterns[sub] = 0;
            
            for (int j = i + 1; j < a - 1; j++) {
                if (sub == txt.substr(j, 2))
                    patterns[sub] += 1;
            }
        }
    }

    it = patterns.begin();
    string max = it->first;

    for (it++ ; it != patterns.end(); it++) {
        if (it->second > patterns.find(max)->second)
            max = it->first;
    }

    cout << max << endl;
}