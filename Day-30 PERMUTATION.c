#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int T, N, A[1000];
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        qsort(A, N, sizeof(int), cmp);

        int operations = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] > i + 1) {
                operations = -1;
                break;
            } else {
                operations += (i + 1 - A[i]);
            }
        }
        printf("%d\n", operations);
    }
    return 0;
}
