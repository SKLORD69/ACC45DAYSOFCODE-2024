#include <stdio.h>

int main() {
    int T, N, i, j, degree;
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%d", &N);
        int A[N];
        for (j = 0; j < N; j++) {
            scanf("%d", &A[j]);
        }
        degree = -1;
        for (j = N - 1; j >= 0; j--) {
            if (A[j] != 0) {
                degree = j;
                break;
            }
        }
        printf("%d\n", degree);
    }
    return 0;
}
