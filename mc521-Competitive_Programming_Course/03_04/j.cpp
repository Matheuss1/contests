#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& adjList, vector<bool>& visited,
         int v, int& aux, int& aux2, int& startV, int idx, int& counter);

int main()
{
    int n, m;

    cin >> n >> m;

    vector<vector<int> > adjList(n);
    vector<bool> visited(n, false);

    int i;

    for (i = 0; i < m; i++) {
        int a, b;

        cin >> a >> b;

        adjList[a - 1].push_back(b - 1);
        adjList[b - 1].push_back(a - 1);
    }

    int counter = 0;

    for (i = 0; i < n; i++) {
        
        if (!visited[i]) {
            int aux = 1, aux2 = 0;
            dfs(adjList, visited, i, aux, aux2, i, 0, counter);

            if (aux && aux2)
                counter += 1;
        }
    }

    cout << counter << endl;
}


void dfs(vector<vector<int>>& adjList, vector<bool>& visited,
         int v, int& aux, int& aux2, int& startV, int idx, int& counter)
{
    visited[v] = true;

    if (adjList[v].size() != 2) // caso dê problema com tempo, posso otimizar aqui
        aux = 0;

    for (auto it = adjList[v].begin(); it != adjList[v].end(); it++) {
        if (*it == startV && idx == -1) {
            aux2 = 1;
        }
        if (!visited[*it]) 
            dfs(adjList, visited, *it, aux, aux2, startV, -1, counter);
    }
}