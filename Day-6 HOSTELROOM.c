#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        int max_p = x;
        int current_p = x;
        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            current_p += a;
            if (current_p > max_p) {
                max_p = current_p;
            }
        }
        printf("%d\n", max_p);
    }
    return 0;
}
