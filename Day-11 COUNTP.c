#include <stdio.h>

int main() {
    int T, N, i, sum, num, has_odd;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        sum = has_odd = 0;
        for (i = 0; i < N; i++) {
            scanf("%d", &num);
            sum += num;
            if (num % 2 != 0) {
                has_odd = 1;
            }
        }
        if (sum % 2 == 0 && has_odd) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
