#include <stdio.h>
int main()
{
    char string[1000001];
    scanf("%s",string);
    int temp;
    int mem[26];
    for(int i = 0; i<26; i++)
    {
        temp = 0;
        for(int j = 0; string[j]!='\0'; j++)
        {
            if(string[j] == 'a'+i || string[j] == 'A'+i)
                temp++;
        }
        mem[i] = temp;
    }

    int maxf = 0;
    int maxa = 0;
    for(int i = 0; i<26;i++) if(mem[i]>maxf){maxf = mem[i]; maxa = i;}
    for(int i = 0; i<26;i++) if(mem[i]==maxf && i!= maxa) {printf("?"); return 0;}
    printf("%c" , maxa+'A');
}