#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        long long N, X;
        scanf("%lld %lld", &N, &X);
        
        if (N % 2 == 0) {
            if (X <= N) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
        else {
            if (X <= N && X % 2 == 1) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    
    return 0;
}
