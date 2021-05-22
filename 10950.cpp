#include <stdio.h>
int main()
{
    int repeat;
    scanf("%d",&repeat);
    for(int i = 0; i<repeat; i++)
    {
        int A,B;
        scanf("%d %d",&A,&B);
        printf("%d\n",A+B);
    }
}