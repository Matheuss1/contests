#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;
    cin.ignore();

    string flats;
    getline(cin, flats);
    flats.erase(remove_if(flats.begin(), flats.end(), ::isspace), flats.end());

    int counter = 0;

    for (int i = 1; i < n - 1; i++) {
        if (flats[i] == '0' && flats[i - 1] =='1'
            && flats[i + 1] == '1') {
                flats[i + 1] = '0';
                counter += 1;
            }
    }

    cout << counter << "\n";
}

