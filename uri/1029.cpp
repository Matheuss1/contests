#include <iostream>
using namespace std;

int fibonacci(int n, int* counter);

int main()
{
    int cases, n, aux;
    int calls = -1;
    cin >> cases;

    for (aux = 0; aux < cases; aux++) {
        cin >> n;
        calls = -1;
        if (n == 0)
            printf("fib(0) = 0 calls = 0\n");         
        else if (n == 1)
            printf("fib(1) = 0 calls = 1\n");         
        else
            printf("fib(%d) = %d calls = %d\n", n, calls, fibonacci(n, &calls));
    }
} 

int fibonacci(int n, int* counter)
{
    int fib;
    if (n == 0) {
        *counter += 1;
        return 0;
    }
    if (n == 1) {
        *counter += 1;
        return 1;
    }
    *counter += 1;
    fib = (fibonacci(n - 1, counter) + fibonacci(n - 2, counter));
    return fib;
}