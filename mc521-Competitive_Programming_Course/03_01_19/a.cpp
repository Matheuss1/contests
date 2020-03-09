#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int r, c, zr, zc;

    cin >> r >> c >> zr >> zc;

    vector<vector<char> > letter;

    for (int i = 0; i < r; i++) {
        vector<char> digits;

        for (int j = 0; j < c; j++) {
            char a;
            cin >> a;

            for (int k = 0; k < zc; k++)
                digits.push_back(a);
        }

        for (int k = 0; k < zr; k++)
            letter.push_back(digits);
    }

    for (int i = 0; i < letter.size(); i++) {
        for (int j = 0; j < letter.at(i).size(); j++)
            cout << letter.at(i).at(j);
        cout << endl;
    }

}