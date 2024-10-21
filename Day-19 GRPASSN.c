#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        int P[N], count[N + 1];
        
        for (int i = 0; i <= N; i++) {
            count[i] = 0;
        }

        for (int i = 0; i < N; i++) {
            scanf("%d", &P[i]);
            count[P[i]]++;
        }

        int possible = 1;
        for (int i = 1; i <= N; i++) {
            if (count[i] % i != 0) {
                possible = 0;
                break;
            }
        }

        if (possible) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
