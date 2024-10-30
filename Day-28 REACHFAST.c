#include <stdio.h>

int main() {
    int T, A, B, K, distance, steps;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &A, &B, &K);
        distance = (B > A) ? B - A : A - B;
        steps = distance / K + (distance % K != 0);
        printf("%d\n", steps);
    }
    return 0;
}
