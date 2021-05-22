#include <stdio.h>

int fact(int a)
{
    if(a==1) return 1;
    return a*fact(a-1);
}//재귀함수적인 해결방법

int main()
{
    int input;
    scanf("%d",&input);
    int sum = 1;
    for(int i = input; i>0; i--)
    {
        sum *= i;
    }
    printf("%d",sum);

}