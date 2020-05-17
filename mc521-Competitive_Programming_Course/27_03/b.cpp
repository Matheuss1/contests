#include <iostream>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    int min = 200;

    for (int i = 0; i < n; i++)
    {
        int bucket;

        cin >> bucket;

        if (k % bucket == 0)
        {
            int div = k / bucket;

            if (div < min)
                min = div;
        }
    }

    cout << min << endl;
}