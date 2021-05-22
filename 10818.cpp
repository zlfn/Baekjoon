#include <stdio.h>
int main() {
    int repeat;
    scanf("%d", &repeat);
    int min = 10000000;
    int max = -10000000;
    for (int i = 0; i < repeat; i++) {
        int input;
        scanf("%d", &input);
        if (min > input) min = input;
        if (max < input) max = input;
    }

    printf("%d %d", min, max);
}