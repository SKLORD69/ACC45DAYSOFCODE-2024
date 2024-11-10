#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int T, N, X;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &N, &X);
        
        int H[N], single_target_time = 0, max_health = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &H[i]);
            single_target_time += (H[i] + X - 1) / X;
            max_health = max(max_health, H[i]);
        }
        
        int multi_target_time = max_health;
        int result = single_target_time < multi_target_time ? single_target_time : multi_target_time;
        printf("%d\n", result);
    }

    return 0;
}
