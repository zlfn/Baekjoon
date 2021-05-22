#include <stdio.h>
#include <math.h>
int main()
{
    int D,P,Q;
    scanf("%d",&D);
    scanf("%d %d",&P,&Q);

    int big = P>=Q?P:Q;
    int small = P>=Q?Q:P;
    int slit = big-small;
    int min = ((D/small)+1)*small;

    if(slit==0)
    {
        if(D%small == 0) printf("%d",D);
        else printf("%d",min);
        return 0;
    }


    for(int i = D/small; i>=ceil((D/(double)big)); i--)
    {
        int temp = ((ceil((D-small*i)/(double)slit))*slit + small*i);
        //printf("%d %d\n",i,temp);
        if(temp<min) min = temp;
    }
    printf("%d",min);
}