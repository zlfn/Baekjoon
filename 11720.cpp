#include <stdio.h>
int main()
{
    int sum = 0;
    int repeat;
    scanf("%d ",&repeat);
    for(int i = 0; i<repeat; i++)
    {
        char input;
        scanf("%c",&input);
        sum += input - '0';
    }
    printf("%d",sum);
}