#include <stdio.h>
#include <cmath>
int main()
{
    int cases, num, i, j, aux = 0;
    scanf("%d", &cases);
    for (i = 0; i < cases; i++) {
        scanf("%d", &num);
        if (num == 2) {
            printf("Prime\n");
        }
        else if (num > 2){
            for (j = 2; j < sqrt(num); j++) {
                if (num % j == 0) {
                    printf("Not Prime\n");
                    aux = 1;
                    break;
                }
            }
            if (aux != 1)
                printf("Prime\n");
        }
        else
        {
            printf("Not prime\n");
        }
        
        aux = 0;
    }
}