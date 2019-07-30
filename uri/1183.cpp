#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char operation;
    int i, j, aux, aux2;
    float m[12][12];
    float result;
    cin >> operation;
    cout << setprecision(1) << fixed;

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++){
            cin >> m[i][j];
        }
    }

    switch (operation)
    {
    case 'S':
        j = 11;
        aux = 1;
        for (i = 0; i < 11; i++) {
            while (j >= aux) {
                result += m[i][j];
                j--;
            }
            j = 11;
            aux++;
        }
        cout << result <<endl;
        break;
    case 'M':
        j = 11;
        aux = 1;
        aux2 = 0;
        for (i = 0; i < 11; i++) {
            while (j >= aux) {
                result += m[i][j];
                aux2 += 1;
                j--;
            }
            j = 11;
            aux++;
        }
        result =  (float) result / aux2;
        cout << result <<endl;
        break;
    default:
        break;
    }
}