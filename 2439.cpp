#include <stdio.h>
int main()
{
    int repeat;
    scanf("%d",&repeat);
    for(int i = 0; i<repeat; i++)
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