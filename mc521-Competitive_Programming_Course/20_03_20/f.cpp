#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size;
    string str;

    cin >> size >> str;
    
    int aux = 0;

    for(int i = 0; i < size - 2; i++) {
        if (str[i] == 'x') {
            int counter = 0, j;

            for (j = i + 1; j < size; j++) {
                if (str[j] != 'x') {
                    i = j;
                    break;
                }
                else
                    counter += 1;
            }

            i = j;
            
            if (counter != 0)
                aux += counter - 1;
        }
    }

    cout << aux << endl;
}