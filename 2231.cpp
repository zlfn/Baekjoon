#include <stdio.h>
int tenze(int a)
{
    int sum = 1;
    for(int i = 1; i<=a; i++)
    {
        sum *= 10;
    }
    return sum;
}
int main()
{
    int a;
    scanf("%d",&a);
    int max;

    int b;
    for(b=1; b<=a+1; b++)
    {
        if(b==a+1)
        {
            printf("0");
            return 0;
        }
        int sum = 0;
        for(int i=9;i>=0;i--)
        { sum += ((b/tenze(i))%10);}

        if(b+sum ==a) break;
    }
    printf("%d",b);
    return 0;
}