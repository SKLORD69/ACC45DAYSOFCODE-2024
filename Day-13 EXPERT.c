#include <stdio.h>

int main() {
    int T, X, Y;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &X, &Y);
        if (Y * 2 >= X)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
