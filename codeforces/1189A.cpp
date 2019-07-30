#include <iostream>
#include <string>

using namespace std;

int main()
{
    int aux, counter = 0, string_len;
    cin >> string_len;
    cin.ignore();

    string array;
    getline(cin, array);
    for (aux = 0; aux < array.length(); aux++) {
        if (array[aux] == '0') {
            counter += 1;
        }
        else {
            counter -= 1;
        }
    }
    if (counter != 0) {
        cout << "1" << endl;
        cout << array << endl;
    }
    else {
        cout << '2' << endl;
        for (aux = 0; aux < array.length() - 1; aux++) {
            cout << array[aux];
        }
        cout << " " << array[string_len - 1]<< endl;
    }
}