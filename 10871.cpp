#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i = 0; i<a; i++)
    {
        int input;
        scanf("%d",&input);
        if(input<b)printf("%d ",input);
    }
}