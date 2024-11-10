#include <stdio.h>

int main() {
    int T, A, B, C, D;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d %d", &A, &B, &C, &D);
        
        if (A + C == 180 || B + D == 180)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}