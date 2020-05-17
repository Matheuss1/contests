#include <bits/stdc++.h>
using namespace std;

#define MAX_NUM 1000000000
typedef pair<long long, int> pli;

int main()
{
    int a;
    cin >> a;

    vector<long long> prices;
    prices.reserve(200000);

    for (int i = 0; i < a; i++) {
        long long b;

        cin >> b;
        prices.push_back(b);
    }

    map<int, bool> visited;

    vector<priority_queue<pli, vector<pli>, greater<pli> > > colors(3);

    for (int i = 0; i < a; i++) {
        int color;
        cin >> color;

        colors.at(color - 1).push({prices.at(i), i});
    }
    for (int i = 0; i < a; i++) {
        int color;
        cin >> color;

        colors.at(color - 1).push({prices.at(i), i});
    }

    int buyers;
    cin >> buyers;

    for (int i = 0; i < buyers; i++) {
        int wishedColor;
        cin >> wishedColor;

        while (!colors[wishedColor - 1].empty() && visited.find(colors[wishedColor - 1].top().second) != visited.end()) {
            colors[wishedColor - 1].pop();
        }

        if (colors[wishedColor - 1].empty())
            cout << -1 << " ";
        else {
            cout << colors[wishedColor - 1].top().first << " ";
            visited[colors[wishedColor - 1].top().second] = true;
            colors[wishedColor - 1].pop();
        }
    }

    cout << endl;

}