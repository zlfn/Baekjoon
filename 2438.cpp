#include <stdio.h>
int main()
{
    int repeat;
    scanf("%d",&repeat);
    for(int i = 1; i<=repeat; i++)
    {
        for(int j = 1; j<=i; j++) printf("*");
        printf("\n");
    }
}