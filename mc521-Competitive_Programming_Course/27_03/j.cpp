#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, bool> used;
    vector<int> team;

    int n, k;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int rating;
        cin >> rating;

        if (team.size() < k && used.find(rating) == used.end())
        {
            team.push_back(i + 1);
            used[rating] = 1;
        }
    }

    if (team.size() == k)
    {
        cout << "YES" << endl;

        for (int i = 0; i < team.size(); i++)
            cout << team.at(i) << " ";
        cout << endl;
    }

    else
        cout << "NO" << endl;
}