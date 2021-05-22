#include <stdio.h>
int main()
{
    int mem[45];
    int num;
    scanf("%d",&num);
    mem[0] = 0;
    mem[1] = 1;

    for(int i = 0; i<num; i++)
    {
        mem[i+2] = mem[i]+mem[i+1];
    }
    printf("%d",mem[num]);
}