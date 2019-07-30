#include <stdio.h>
#include <math.h>

int main()
{
    int n, h, m;
    int l, r, x;  //restrictions    
    scanf("%d%d%d", &n, &h, &m);
    int i,j; //aux
    int array[n], sum = 0;  


    for (i = 0; i < n; i++) {
        array[i] = pow(h,2);
    }
    for (i = 0; i < m; i++) {
        scanf("%d%d%d", &l, &r, &x);
        for (j = l - 1; j < r; j++) {
            if (h < x){
                if (array[j] > pow(h,2)) {
                    array[j] = pow(h,2);
                }
            } 
            else {
                if (array[j] > pow(x,2)){
                    array[j] = pow(x,2);
                }
            }
        }
    }
    
    for (i = 0; i < n; i++) {
        sum += array[i];
    }

    
    printf("%i\n", sum);

} 