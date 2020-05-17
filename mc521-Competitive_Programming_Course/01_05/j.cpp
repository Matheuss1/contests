#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string bgn, end;
    cin >> bgn >> end;

    int h1, m1, h2, m2;
    h1 = stoi(bgn, nullptr);
    m1 = stoi(&bgn[3]);
    h2 = stoi(end, nullptr);
    m2 = stoi(&end[3]);

    int timeInMinutes;

    if ( (h2 > h1) || (h2 == h1 && m2 > m1) ) {
        timeInMinutes = (h2 * 60 + m2 - h1 * 60 - m1) / 2;
        h1 += timeInMinutes / 60;
        m1 += timeInMinutes % 60;

        if (m1 > 59) {
            h1 += m1 / 60;
            m1 %= 60;
        }
    }
    else {
        timeInMinutes = ( ((h2 - h1) + 24) * 60 - (m2 + m1) ) / 2;
        h1 += timeInMinutes / 60;
        m1 = timeInMinutes % 60;
        if (h1 > 23)
            h1 -=  24;
        
    }
    cout.fill('0');
    cout << setw(2) << h1 << ":" << setw(2) << m1 << "\n";
}
