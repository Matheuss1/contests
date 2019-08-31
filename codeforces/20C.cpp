#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;
#define INF 99999999999
typedef pair<int, int> pii;

void printPath(vector<int> &parent, int j);
int main()
{
    int m, n;
    cin >> m >> n;
    vector<long long> dis(m, INF);

    int i, j;
    vector<vector<pair<int, int> > > graph(m);
    vector<int> parent(m);
    parent[0] = -1;
    for (i = 0; i < n; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        graph[a - 1].push_back(make_pair(w, b - 1));
        graph[b - 1].push_back(make_pair(w, a - 1));
    }
 
    for (i = 0; i < m; i++) {
        graph[i].resize(graph[i].size());
    }
 
    //---------------- printing edges in each list ----------------
    // for (i = 0; i < m; i++) {
    //     for (j = 0; j < graph[i].size(); j++) {
    //         printf("%d ", graph[i][j].second);
    //     }
    //     printf("\n");
    // }
    dis[0] = 0;
    priority_queue<pii, vector<pii>, greater<pii> > pq;
    pq.push({0, 0});
    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        if (u == m - 1) 
            break;
        for (i = 0; i < graph[u].size(); i++) {
            int v = graph[u][i].second;
            int weight = graph[u][i].first;
            if (dis[v] > dis[u] + weight) {
                dis[v] = dis[u] + weight;
                pq.push({dis[v], v});
                parent[v] = u;
            }
        }
    }
    if (dis[m - 1] == INF)
        cout << -1 << endl;
    else {
        cout << 1;
        printPath(parent, m - 1);
        cout << endl;
    }
}

void printPath(vector<int> &parent, int j)
{
    if (parent.at(j) == -1) {
        return;
    }
    printPath(parent, parent[j]);
    cout << " " << j + 1;
}