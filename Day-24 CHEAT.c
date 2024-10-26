#include <stdio.h>

int main() {
    int T, N, count;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        count = (N + 5) / 7;
        printf("%d\n", count);
    }
    return 0;
}
