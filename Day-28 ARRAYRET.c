#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        long long B[N], sum = 0;
        for (int i = 0; i < N; i++) {
            scanf("%lld", &B[i]);
            sum += B[i];
        }
        sum /= (N + 1);
        for (int i = 0; i < N; i++) {
            printf("%lld ", B[i] - sum);
        }
        printf("\n");
    }
    return 0;
}
