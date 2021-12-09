#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long a, b;
    string bitStr;

    bitStr.resize(32);

    while (cin >> a >> b) {
        bitset<32> aBits(a);
        bitset<32> bBits(b);

        for (int i = 0; i < 32; i++) {
            bool aTest, bTest;

            aTest = aBits.test(i);
            bTest = bBits.test(i);

            if (aTest && bTest) {
                bitStr[31 - i] = '0';
            }
            else if (aTest || bTest) {
                bitStr[31 - i] = '1';
            }
            else {
                bitStr[31 - i] = '0';
            }
        }

        bitset<32> res(bitStr);
        cout << res.to_ulong() <<endl;
    }
}