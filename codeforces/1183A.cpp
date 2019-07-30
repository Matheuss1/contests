#include <iostream>
using namespace std;

int main()
{
    int number, aux, sum = 1011, temp;
    cin >> number;
    aux = number;
    while (sum % 4 != 0){
        sum = 0;
        while (aux > 0) {
            sum += aux % 10;
            aux = aux / 10;
        }
        if (sum % 4 != 0) {
            number += 1;
            aux = number;
        }
    }
    cout << number << endl;
}
