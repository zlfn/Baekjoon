#include <stdio.h>
int main()
{
    int max = 0;
    int max_L = 0;
    for(int i = 1; i<10; i++)
    {
        int input;
        scanf("%d",&input);
        if(max<input)
        {
            max = input;
            max_L = i;
        }
    }
    printf("%d\n",max);
    printf("%d\n",max_L);
}