#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int T, N;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);
        int A[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        qsort(A, N, sizeof(int), compare);

        for (int i = 1; i < N; i += 2) {
            if (i + 1 < N) {
                int temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }

        for (int i = 0; i < N; i++) {
            printf("%d ", A[i]);
        }
        printf("\n");
    }

    return 0;
}
