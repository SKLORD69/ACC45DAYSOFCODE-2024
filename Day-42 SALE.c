#include <stdio.h>

int main() {
    int T, A, B, C;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &A, &B, &C);
        int min = A < B ? (A < C ? A : C) : (B < C ? B : C);
        printf("%d\n", A + B + C - min);
    }
    return 0;
}
