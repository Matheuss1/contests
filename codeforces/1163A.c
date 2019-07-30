#include <stdio.h>
int min(int a, int b);

int main()
{
    int init, final;
    int a, b;
    scanf("%d %d", &init, &final);
    if (final == 0)
        printf("1\n");
    else
        printf("%i\n", min(final, init - final));

}

int min(int a, int b){
    if (a > b) 
        return b;
    else 
        return a;
}