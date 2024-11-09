#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);
        
        long long max_distance = 0;
        for (int i = 0; i < N; i++) {
            int A;
            scanf("%d", &A);
            int dist1 = abs(A - 1);
            int dist2 = abs(A - M);
            max_distance += (dist1 > dist2) ? dist1 : dist2;
        }
        
        printf("%lld\n", max_distance);
    }
    return 0;
}
