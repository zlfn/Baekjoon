#include <stdio.h>
int main()
{
    for(int i = 0; i<3; i++) {
        long long int sum = 0;
        int repeat = 0;
        scanf("%d", &repeat);

        int overcount=0;

        for(int j = 0; j<repeat; j++)
        {
            long long int input;
            scanf("%lld",&input);
            long long int temp = sum;
            sum += input;
            if(input<0&&sum>temp) overcount--;
            if(input>0&&sum<temp) overcount++;
        }
        if(sum+overcount*18446744073709551615>0) printf("+\n");
        if(sum+overcount*18446744073709551615==0) printf("0\n");
        if(sum+overcount*18446744073709551615<0) printf("-\n");
    }
}