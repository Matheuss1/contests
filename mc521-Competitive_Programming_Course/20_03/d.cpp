#include <bits/stdc++.h>
using namespace std;

void dfsSetB(vector<vector<int> >& people, vector<vector<int> >& languages,
             vector<bool>&visited1, int v, vector<bool>&visited2);

void dfsSetA(vector<vector<int> >& people, vector<vector<int> >& languages,
             vector<bool>&visited1, int v, vector<bool>&visited2)
{
    visited1[v] = true;

    for (auto it = people.at(v).begin(); it != people.at(v).end(); it++) {
        int temp = *it;
        if (!visited2[temp]) {
            dfsSetB(people, languages, visited1, temp, visited2);
        }
    }
}

void dfsSetB(vector<vector<int> >& people, vector<vector<int> >& languages,
             vector<bool>&visited1, int v, vector<bool>&visited2)
{
    visited2[v] = true;
    
    for (auto it = languages.at(v).begin(); it != languages.at(v).end(); it++) {
            int temp = *it;
        if (!visited1[temp]) {
            dfsSetA(people, languages, visited1, temp, visited2);
        }
    }
}

int main()
{
    int n, m;

    cin >> n >> m;

    vector<vector<int> > people(n);
    vector<vector<int> > languages(m);
    vector<bool> visitedP(n, false);
    vector<bool> visitedL(m, false);

    int counter = 0, aux = 0;

    for (int i = 0; i < n; i++) {
        int k;

        cin >> k;

        for (int j = 0; j < k; j++) {
            int ai;

            cin >> ai;

            languages[ai - 1].push_back(i);
            people[i].push_back(ai - 1);
        }
    }

    for (int i = 0; i < n; i++) {
        if (people.at(i).empty()) {
            aux += 1;
        }

        if (!visitedP[i]) {
            dfsSetA(people, languages, visitedP, i, visitedL);
            counter += 1;
        }
    }

    if (aux == n)
        cout << n << endl;
    else
        cout << counter - 1 << endl;
}
