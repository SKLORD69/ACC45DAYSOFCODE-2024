#include <stdio.h>

int main() {
    int T, A, B, i;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &A, &B);
        int limak = 0, bob = 0;
        for (i = 1; ; i++) {
            if (i % 2 != 0) {
                if (limak + i > A) {
                    printf("Bob\n");
                    break;
                }
                limak += i;
            } else {
                if (bob + i > B) {
                    printf("Limak\n");
                    break;
                }
                bob += i;
            }
        }
    }
    return 0;
}
