#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    string phrase;

    map<string, string> db;

    cin >> a;

    for (int i = 0; i < a; i++) {
        cin >> phrase;

        auto it = db.find(phrase);

        if (it == db.end()) {
            cout << "OK" << endl;
            db[phrase]= phrase;
        }
        else {
            int counter = 0;
            
            int j;
            for (j = (*it).second.size() - 1; j > 0; j--) {
                if ((*it).second[j] >= 48 && (*it).second[j] <= 57) {
                    counter += 1;
                }
                else
                    break;
            }

            if (counter == 0) {
                phrase.append("1");
                db[(*it).first] = phrase;

                cout << phrase << endl;
                continue;
            }

            string temp = ((*it).second).substr(j + 1, counter);

            temp = to_string(stoi(temp) + 1);

            phrase.replace(j+1, temp.size(), temp);
            db[(*it).first] = phrase;

            cout << phrase << endl;
        }
    }
}