#include <stdio.h>

int main() {
    int T, A, B;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &A, &B);
        int valuation1 = A * 10;
        int valuation2 = B * 5;
        if (valuation1 > valuation2) {
            printf("FIRST\n");
        } else if (valuation2 > valuation1) {
            printf("SECOND\n");
        } else {
            printf("ANY\n");
        }
    }
    return 0;
}
