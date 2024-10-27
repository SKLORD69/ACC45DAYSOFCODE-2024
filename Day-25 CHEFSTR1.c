#include <stdio.h>
#include <stdlib.h>

int main() {
    int T, N, i;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        int *strings = (int *)malloc(N * sizeof(int));
        for (i = 0; i < N; i++) {
            scanf("%d", &strings[i]);
        }
        long long int total_skips = 0; // Use long long int for total_skips
        for (i = 1; i < N; i++) {
            total_skips += abs(strings[i] - strings[i - 1]) - 1;
        }
        printf("%lld\n", total_skips); // Use %lld to print long long int
        free(strings);
    }
    return 0;
}