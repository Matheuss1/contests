#include <bits/stdc++.h>
using namespace std;


void dfsSetB(vector<vector<int> >& x, vector<vector<int> >& y,
             vector<bool>&visited1, int v, vector<bool>&visited2);

void dfsSetA(vector<vector<int> >& x, vector<vector<int> >& y,
             vector<bool>&visited1, int v, vector<bool>&visited2)
{
    visited1[v] = true;

    for (auto it = x.at(v).begin(); it != x.at(v).end(); it++) {
        int temp = *it;
        if (!visited2[temp]) {
            dfsSetB(x, y, visited1, temp, visited2);
        }
    }
}

void dfsSetB(vector<vector<int> >& x, vector<vector<int> >& y,
             vector<bool>&visited1, int v, vector<bool>&visited2)
{
    visited2[v] = true;
    
    for (auto it = y.at(v).begin(); it != y.at(v).end(); it++) {
            int temp = *it;
        if (!visited1[temp]) {
            dfsSetA(x, y, visited1, temp, visited2);
        }
    }
}
int main()
{
    int a;

    cin >> a;

    vector<vector<int>> x(1000);
    vector<vector<int>> y(1000);
    vector<bool> visitedX(1000, false);
    vector<bool> visitedY(1000, false);

    int i;

    for (i = 0; i < a; i++) {
        int a, b;

        cin >> a >> b;

        x[a-1].push_back(b-1);
        y[b-1].push_back(a-1);
    }

    int counter = 0;

    for (i = 0; i < 1000; i++) {
        if (!x[i].empty())
            if (!visitedX[i]) {
                dfsSetA(x, y, visitedX, i, visitedY);
                counter += 1;
            }
    }

    cout << counter - 1 << endl;
}