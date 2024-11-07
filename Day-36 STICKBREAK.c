#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        long long L, K;
        scanf("%lld %lld", &L, &K);
        
        // Check if L is divisible by K
        long long result = (L % K == 0) ? 0 : 1;
        
        printf("%lld\n", result);
    }
    
    return 0;
}