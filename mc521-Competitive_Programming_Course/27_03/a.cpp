#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{

    int a;
    map<char, char> vowels;

    vowels['a'] = 'a';
    vowels['e'] = 'e';
    vowels['i'] = 'i';
    vowels['o'] = 'o';
    vowels['u'] = 'u';
    vowels['y'] = 'y';
    string phrase;

    cin >> a >> phrase;

    auto it = phrase.begin();

    for (it; it != phrase.end(); it++)
    {
        cout << *it;

        int aux = 0;

        if (vowels.find(*it) != vowels.end())
        {
            auto tempit = ++it;

            while (vowels.find(*tempit) != vowels.end())
            {
                tempit++;
            }

            it = tempit;
            aux = 1;
        }

        if (aux)
            --it;
    }
    cout << endl;
}