#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int T, N, K;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        int A[N], uncle_johny;
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        scanf("%d", &K);
        uncle_johny = A[K - 1];
        sort(A, N);
        for (int i = 0; i < N; i++) {
            if (A[i] == uncle_johny) {
                printf("%d\n", i + 1);
                break;
            }
        }
    }
    return 0;
}
