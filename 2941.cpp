#include <stdio.h>
int main() {
    char string[101] = {};
    scanf("%s", string);
    int sum = 0;
    for (int i = 0; string[i]!='\0'; i++) {
        if (string[i] == 'c' && string[i + 1] == '=') {
            sum++;
            i++;
            continue;
        }
        if (string[i] == 'c' && string[i + 1] == '-') {
            sum++;
            i++;
            continue;
        }
        if (string[i] == 'd' && string[i + 1] == 'z' && string[i + 2] == '=') {
            sum++;
            i+=2;
            continue;
        }
        if (string[i] == 'd' && string[i + 1] == '-') {
            sum++;
            i++;
            continue;
        }
        if (string[i] == 'l' && string[i + 1] == 'j') {
            sum++;
            i++;
            continue;
        }
        if (string[i] == 'n' && string[i + 1] == 'j') {
            sum++;
            i++;
            continue;
        }
        if (string[i] == 's' && string[i + 1] == '=') {
            sum++;
            i++;
            continue;
        }
        if (string[i] == 'z' && string[i + 1] == '=') {
            sum++;
            i++;
            continue;
        }
        sum++;
    }
    printf("%d", sum);
}
