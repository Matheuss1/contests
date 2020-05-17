#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int queries;

    cin >> queries;

    for (int i = 0; i < queries; i++) {
        long long n, m;

        cin >> n >> m;
        
        if (n < m) {
            cout << 0 << endl;
            continue;
        }

        string aux1 = to_string(m);
        vector<int> patterns;

        for (int j = 1;;j++) {
            string temp = to_string(j * m);

            if (j != 1 && temp.back() == aux1.back())
                break;
            patterns.push_back(stoi(&temp.back(), nullptr));

        }

        int a = patterns.size();

        long long aux2 = n / m;
        long long aux3 = aux2 / a;
        long long aux4 = aux2 % a;

        long long sum = 0;

        for (int j = 0; j < a; j++) {
            sum += patterns.at(j) * aux3;
        }

        int j;

        j = 0;
        while (aux4 > 0) {
            sum += patterns.at(j++);

            aux4--;
        }

        cout << sum << endl;
    }
}