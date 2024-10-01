#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N];
        int freq[N + 1];
        for (int i = 0; i <= N; i++) freq[i] = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            freq[A[i]]++;
        }
        int max_freq = 0;
        for (int i = 1; i <= N; i++) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
            }
        }
        printf("%d\n", N - max_freq);
    }
    return 0;
}
