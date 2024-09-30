#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        long long N, X;
        scanf("%lld %lld", &N, &X);  // Read N and X for each test case
        
        // If N is even, Chef can break it into parts of any parity (odd or even)
        if (N % 2 == 0) {
            if (X <= N) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
        // If N is odd, Chef can only break it into odd parts, so X must be odd
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
