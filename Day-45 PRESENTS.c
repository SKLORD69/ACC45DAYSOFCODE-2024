#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long N;
        scanf("%lld", &N);
        printf("%lld\n", (N / 5) * 4 + (N % 5));
    }
    return 0;
}
