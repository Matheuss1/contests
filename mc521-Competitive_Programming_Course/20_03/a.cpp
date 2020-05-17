#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <map>

using namespace std;
int main()
{
    int t;
     
    cin >> t;
    int counter = 1;

    while(t != 0) {
        cout << "Scenario #" << counter << endl;
        
        map<int, int> teams;
        for (int i = 0; i < t; i++) {
            int a;
            cin >> a;
            vector<int> temp;

            for (int j = 0; j < a; j++) {
                int b;
                cin >> b;
                teams[b] = i + 1;
            }
        }

        string operation;
        cin >> operation;

        list<int> tqueue;
        map<int, list<int>::iterator> index;

        while (operation != "STOP") {
            if (operation == "ENQUEUE") {
                int who;
                cin >> who;

                if (index.find(teams[who]) == index.end()) {
                    tqueue.push_back(who);
                    index[teams[who]] = --tqueue.end();
                }
                else {
                    tqueue.insert(++index[teams[who]], who);
                    --index[teams[who]];
                }
            }
            else {
                cout << tqueue.front() << endl;

                auto it = tqueue.begin();
                if (++it == tqueue.end() || (teams[*tqueue.begin()] != teams[*(++tqueue.begin())])) {
                    index.erase(teams[*tqueue.begin()]);
                }
                tqueue.pop_front();
            }

            cin >> operation;
        }

        cin >> t;
        if (t)
            cout << endl;
        else
            cout << endl;
            
        counter++;
    }

}