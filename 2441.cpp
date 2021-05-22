#include <stdio.h>
int main()
{
    int repeat;
    scanf("%d",&repeat);
    for(int i = repeat-1; i>=0; i--)
    {
        for(int j = repeat-1-i; j>0; j--)
        {
            printf(" ");
        }
        for(int j = i+1; j>0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}