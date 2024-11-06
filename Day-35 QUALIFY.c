#include <stdio.h>

int main() {
    int T, X, A, B;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &X, &A, &B);
        int score = A * 1 + B * 2;
        if (score >= X) {
            printf("Qualify\n");
        } else {
            printf("NotQualify\n");
        }
    }
    
    return 0;
}

