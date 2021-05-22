#include <stdio.h>
int main()
{
    char id[51];
    scanf("%s",id);
    for(int i = 0; i<51; i++)
    {
        if(id[i]=='\0')
        {
            id[i]='?';
            id[i+1]='?';
            id[i+2]='!';
            id[i+3]='\0';
            break;
        }
    }
    printf("%s",id);
}