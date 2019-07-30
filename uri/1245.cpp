#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, i, counter;
    char l;
    while(scanf("%d", &n) != EOF) {
        vector<int> which_foot(2,0);
        vector<vector<int> > vet(31, which_foot);
        counter = 0;
        for (i = 0; i < n; i++) {
            cin >> m;
            cin >> l;
            if (l == 'D') {
                vet[m - 30][0] += 1;
            }
            else {
                vet[m - 30][1] += 1;
            }
        }
        for (i = 0; i < 31; i++) {
            counter += min(vet[i][0], vet[i][1]);
        }
        printf("%d\n", counter);
    }

}