#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        scanf("%d", &N);
        int fingers[N], sheaths[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &fingers[i]);
        }
        for (int i = 0; i < N; i++) {
            scanf("%d", &sheaths[i]);
        }
        
        int flag_front = 1, flag_back = 1;
        for (int i = 0; i < N; i++) {
            if (fingers[i] > sheaths[i]) {
                flag_front = 0;
            }
            if (fingers[i] > sheaths[N - 1 - i]) {
                flag_back = 0;
            }
        }

        if (flag_front && flag_back) {
            printf("both\n");
        } else if (flag_front) {
            printf("front\n");
        } else if (flag_back) {
            printf("back\n");
        } else {
            printf("none\n");
        }
    }
    return 0;
}
