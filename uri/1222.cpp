#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, l, c;
    int lines = 1, pages = 1, lineSize = 0;
    int i, size;
    
    while (cin >> n >> l >> c) {
        string words;
        lineSize = 0;

        for (i = 0; i < n; i++) {
            cin >> words;
            size = words.size();
            if (lineSize + size <= c) {
                lineSize += size + 1;
            }
            else {
                lineSize = size + 1;
                lines += 1;

                if (lines > l) {
                    pages += 1;
                    lines = 1;
                }
            }
        }
        cout << pages << endl;

        lines = pages = 1;
    }
}