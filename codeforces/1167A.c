#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tests_cases, string_lenght, i, x;

    scanf("%d", &tests_cases);
    
    for (i = 0; i < tests_cases; i++) {

        scanf("%d", &string_lenght);

        char array[string_lenght + 1];
        scanf("%s", array);

        for (x = 0; x <= string_lenght; x++) {
            if ( array[x] == '8' ) {
                if ( string_lenght - x >= 11) {
                    printf("YES\n");
                    break;
                }                
                else {
                    printf("NO\n");
                    break;
                }
            } 
            else if (x == string_lenght) {
                printf("NO\n");
                break;
            }
        }
    }
}