#include <stdio.h>

int main() {
    int T, N, X;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &N, &X);
        
        int single_target_time = 0, max_health = 0, health;
        for (int i = 0; i < N; i++) {
            scanf("%d", &health);
            single_target_time += (health + X - 1) / X;
            if (health > max_health) {
                max_health = health;
            }
        }
        
        int result = single_target_time < max_health ? single_target_time : max_health;
        printf("%d\n", result);
    }

    return 0;
}
