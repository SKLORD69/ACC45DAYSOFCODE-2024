#include <stdio.h>

int main() {
    int T, X, Y, R, totalSticks, plates;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &X, &Y, &R);
        totalSticks = X + (R / 30);
        plates = (totalSticks + Y - 1) / Y;
        printf("%d\n", plates);
    }
    return 0;
}
