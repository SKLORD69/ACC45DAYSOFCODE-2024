#include <stdio.h>

int main() {
    int T, N, A[100], f[11], i, j, max_f, m;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        for (i = 0; i < 11; i++) f[i] = 0;
        for (i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            f[A[i]]++;
        }
        max_f = 0;
        for (i = 1; i <= 10; i++) {
            if (f[i] > max_f) {
                max_f = f[i];
            }
        }
        m = N - max_f;
        printf("%d\n", m);
    }
    return 0;
}
