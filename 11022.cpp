#include <stdio.h>
int main()
{
    int repeat;
    scanf("%d",&repeat);
    for(int i = 1; i<=repeat; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d + %d = %d\n",i,a,b,a+b);
    }
}