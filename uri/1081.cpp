#include <iostream>
#include <vector>
#include <utility>
#include <iomanip>

using namespace std;

void dfs(vector<vector<int> > &graph, vector<bool> &visited, int currentPos, int spaces);

int main()
{
    int cases, a, b, c, d;
    int i, j;

    cin >> cases;

    for (i = 0; i < cases; i++) {
        cout << "Caso " << i + 1 << ":" << endl;
        cin >> a >> b;

        vector<vector<int> > graph(a);

        for (j = 0; j < a; j++) {
            vector<int> temp(a, 0);

            graph[j] = temp;
        }

        vector<bool> visited(a, false);

        for (j = 0; j < b; j++) {

            cin >> c >> d;
            graph[c][d] = 1;
        }

        dfs(graph, visited, 0, 3);
    }
}


void dfs(vector<vector<int> > &graph, vector<bool> &visited, int currentPos, int spaces)
{
    int i, j, k, flag = 0;

    for (i = currentPos; i < graph.size(); i++) {
        if (!visited[i]) {
            visited[i] = true;
            
            for (j = 0; j < graph.size(); j++) {

                if (graph[i][j] == 0)
                    continue;

                if (graph[i][j] == 1 && !visited[j]) {
                    flag = 1;
                    for (k = 0; k < spaces - 1; k++)
                        cout << " ";
                    cout << i << '-' << j << " pathR(G," << j << ')' << endl;

                    if (i == j) 
                        continue;

                    dfs(graph, visited, j, spaces + 2);
                }
                else
                    cout << setw(spaces) << i << '-' << j << endl;
            }

            if (currentPos)
                return;
                
            if (!flag)
                continue;

            flag = 0;

            cout << endl;
        }
    }
}