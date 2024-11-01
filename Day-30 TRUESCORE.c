#include <stdio.h>

int main() {
    int T, A, B, C, D;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &A, &B);
        scanf("%d %d", &C, &D);
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }
    return 0;
}
