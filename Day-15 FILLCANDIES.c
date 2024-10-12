#include <stdio.h>

int main() {
    int T, N, K, M;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &N, &K, &M);
        int capacity = K * M;
        int bags = (N + capacity - 1) / capacity;
        printf("%d\n", bags);
    }
    return 0;
}
