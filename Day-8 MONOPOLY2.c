#include <stdio.h>

int main() {
    int t, a, b, c, d;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a > b + c + d || b > a + c + d || c > a + b + d || d > a + b + c) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
