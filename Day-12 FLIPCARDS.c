#include <stdio.h>

int main() {
    int T, N, X;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &N, &X);
        int f = N - X;
        printf("%d\n", X < f ? X : f);
    }
    return 0;
}
