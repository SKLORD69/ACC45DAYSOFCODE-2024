#include <stdio.h>

int main() {
    int X, Y, timeSpent;
    scanf("%d %d", &X, &Y);
    timeSpent = (Y / 2) + (X - Y);
    printf("%d\n", timeSpent);
    return 0;
}
