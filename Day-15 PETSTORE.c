#include <stdio.h>

int main() {
    int T, N;
    int A[100000]; 
    int freq[101];
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        for (int i = 0; i < 101; i++) freq[i] = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            freq[A[i]]++;
        }
        int possible = 1;
        for (int i = 1; i <= 100; i++) {
            if (freq[i] % 2 != 0) {
                possible = 0;
                break;
            }
        }
        if (possible == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
