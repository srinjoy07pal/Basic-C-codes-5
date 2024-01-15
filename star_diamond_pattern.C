#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number of rows in your pattern: ");
    scanf("%d",&n);
    int spaces = n - 1, characters = 1;
    for(int i = 1; i <= n; i++)  {
        for(int j = 1; j <= spaces; j++)  {
            printf(" ");
        }
        for(int k = 1; k <= characters; k++)  {
            printf("*");
        }
        if(spaces > i)  {
            spaces = spaces - 1;
            characters = characters + 2;
        }
        if(spaces < i)  {
            spaces = spaces + 1;
            characters = characters - 2;
        }
        printf("\n");
    }
    return 0;
}
