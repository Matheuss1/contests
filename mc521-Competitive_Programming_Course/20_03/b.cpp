#include <iostream>
#include <vector>
#include <utility>

using namespace std;

typedef pair<long long, long long> ii;

int main()
{
    int n, m;

    cin >> n >> m;

    ii rooms[200000];
    int idx;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;

        if (!i) {
            rooms[i] = {1, a};
        }
        else {
            rooms[i] = {rooms[i-1].second + 1, rooms[i-1].second + a};
        }
        idx = i;
    }
    
    int aux = idx;
    int mid;

    for (int i = 0; i < m; i++) {
        long long a;
        cin >> a;

        int l = 0, r = aux;

        while(true) {
            int mid = (l + r) / 2;

            ii temp = rooms[mid];

            if (temp.second != 0 && a >= rooms[mid].first && a <= rooms[mid].second) {
                cout << mid + 1 << " " << a - rooms[mid].first + 1 << endl;
                break;
            }

            if (rooms[mid].second < a) {
                l = mid + 1;
            }
            else {
                r = mid;
            }
        }
    }
}