#include <stdio.h>
int main()
{
    int sum = 0;
    for(int i = 0; i<5; i++)
    {
        int input;
        scanf("%d",&input);
        sum+=input*input;
    }
    printf("%d",sum%10);
}