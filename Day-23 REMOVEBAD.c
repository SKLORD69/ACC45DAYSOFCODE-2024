#include <stdio.h>

int main() {
    int t, n, max, count[100001];
    scanf("%d", &t);
    for (int j = 0; j < t; j++) {
        scanf("%d", &n);
        for (int i = 0; i <= n; i++) count[i] = 0;
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            count[x]++;
        }
        max = 0;
        for (int i = 1; i <= n; i++) {
            if (count[i] > max) max = count[i];
        }
        printf("%d\n", n - max);
    }
    return 0;
}
