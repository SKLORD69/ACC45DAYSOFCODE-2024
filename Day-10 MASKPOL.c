#include <stdio.h>

int main() {
    int T, N, A;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &N, &A);
        printf("%d\n", (N - A < A) ? N - A : A);
    }
    return 0;
}
