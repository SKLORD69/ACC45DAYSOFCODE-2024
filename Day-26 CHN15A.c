#include <stdio.h>

int main() {
    int T, N, K, count, i, j;
    scanf("%d", &T);
    
    for (i = 0; i < T; i++) {
        scanf("%d %d", &N, &K);
        int values[N];
        count = 0;
        
        for (j = 0; j < N; j++) {
            scanf("%d", &values[j]);
            if ((values[j] + K) % 7 == 0) {
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}
