#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        int B[N], sum = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &B[i]);
            sum += B[i];
        }
        if (sum % 2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
