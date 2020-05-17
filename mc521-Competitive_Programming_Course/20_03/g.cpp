#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;

    for (int i = 0; i < a; i++) {
        string str;

        cin >> str;

        int counter = 0;
        int size = str.size();
        counter += size;

        for (int j = 2; j <= size; j++) {
            int firstIteration = 0;
            int chars[26] = {0};
            int oddCount = 0;

            for (int k = 0; k <= size - j; k++) {


                if (!firstIteration) {
                    for (int l = k; l < j + k; l++) {
                        int temp = str[l] - 97;

                        chars[temp] += 1;

                        if (chars[temp] % 2 != 0) {
                            oddCount += 1;
                        }
                        else {
                            oddCount -= 1;
                        }
                    }

                    if (oddCount <= 1)
                        counter += 1;    

                    firstIteration = 1;            
                }
                else {
                    chars[str[k - 1] - 97] -= 1;

                    if (chars[str[k - 1] - 97] % 2 != 0)
                        oddCount++;
                    else
                        oddCount -= 1;

                    chars[str[k + j - 1] - 97] += 1;

                    if (chars[str[k + j - 1] - 97] % 2 != 0)
                        oddCount++;
                    else
                        oddCount -= 1;

                    if (oddCount <= 1)
                        counter++;
                }
            }
        }

        cout << "Case " << i + 1 << ": " << counter << endl;
    }
}