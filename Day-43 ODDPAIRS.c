#include <stdio.h>

int main() {
    int T, N;
    long long odd, even;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        odd = (N + 1) / 2;
        even = N / 2;
        printf("%lld\n", odd * even * 2);
    }
    
    return 0;
}
