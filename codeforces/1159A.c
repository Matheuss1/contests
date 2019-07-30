#include <stdio.h>

int main()
{
    int i, add = 0;  // aux
    int stones_before = 0, result;
    int numb_operations;
    scanf("%d", &numb_operations);

    char array[numb_operations];
    int operations[2] = {0};

    scanf("%s", array);
    for (i = 0; i < numb_operations; i++) {
        if (array[i] == '-') {
            operations[0] += 1;
            if (add != 1) {
                stones_before += 1;
            }
        }
        else if (array[i] == '+') {
            operations[1] += 1;
            add = 1;
        }
        if (operations[0] - operations[1] - stones_before > 0) {
            stones_before += operations[0] - operations[1] - stones_before;
        }
    }
    result = stones_before + operations[1] - operations[0];

    if (result == 0) 
        printf("0\n");
    else 
        printf("%i\n", result);

}