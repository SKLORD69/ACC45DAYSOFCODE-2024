#include <stdio.h>
#include <stdlib.h>

int main() {
    int T, N, sum, ones, minus_ones;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d", &N);
        int A[N];
        sum = ones = minus_ones = 0;
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            sum += A[i];
            if (A[i] == 1) ones++;
            else minus_ones++;
        }
        
        if (N % 2 != 0) {
            // If N is odd, it's impossible to balance
            printf("-1\n");
        } else {
            // Calculate how many flips are needed
            int target = abs(sum) / 2;
            printf("%d\n", target);
        }
    }
    
    return 0;
}