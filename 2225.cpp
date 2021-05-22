#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d",&N, &K);
    long long int nums [K][N+1];

    for(int i = 0; i<N+1; i++)
    {
        nums[0][i] = 1;
    }
    for(int i = 0; i<K; i++)
    {
        nums[i][0] = 1;
    }

    for(int k = 1; k<K; k++)
        for(int j = 1; j<N+1; j++)
        {
            nums[k][j] = (nums[k-1][j] + nums[k][j-1])%1000000000;
        }

    printf("%lld", nums[K-1][N]);
}