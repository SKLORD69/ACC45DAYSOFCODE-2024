#include <stdio.h>

int main() {
    int T, N, K, D;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &N, &K);
        for (int i = 0; i < N; i++) {
            scanf("%d", &D);
            if (D % K == 0) printf("1");
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}
