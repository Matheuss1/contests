#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;

    cin >> n;
    vector<int> students;

    for (int i = 0; i < n; i++) {
        int a;

        cin >> a;
        students.push_back(a);
    }

    sort(students.begin(), students.end());

    int sum = 0;

    for (int i = 0; i < n; i += 2) {
        sum += students.at(i + 1)  - students.at(i);
    }

    cout << sum << endl;
}