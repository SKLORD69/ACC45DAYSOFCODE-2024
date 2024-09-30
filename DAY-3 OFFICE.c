#include <stdio.h>

int main() {
    int T, a, b, c;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &a, &b);
        c = 4 * a + b;
        printf("%d\n", c);
    }
    return 0;
}


