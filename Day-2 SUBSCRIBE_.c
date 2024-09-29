#include <stdio.h>

int main() {
    int t, n, x;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &x);
        int s = (n + 5) / 6;
        printf("%d\n", s * x);
    }
    return 0;
}