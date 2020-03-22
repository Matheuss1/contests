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

        list<int> tqueue;

        string operation;
        int who;

        cin >> operation;

        while (operation != "STOP") {

            if (operation == "ENQUEUE") {
                cin >> who;
                int aux = 0;
                list<int> :: iterator it, index;

                for (it = tqueue.begin(); it != tqueue.end(); it++) {
                    if (teams[who] == teams[*it]) {
                        index = it;
                        aux = 1;
                    }
                }
                if (!aux)
                    tqueue.push_back(who);
                else {
                    index++;
                    tqueue.insert(index, who);
                }
                    
            }
            else {
                cout << tqueue.front() << endl;
                tqueue.pop_front();
            }

            cin >> operation;
        }

        cin >> t;
        if (t)
            cout << endl;
        counter++;

    }

}