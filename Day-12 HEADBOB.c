#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        char gestures[N+1];
        scanf("%s", gestures);
        int isIndian = 0, isForeign = 0;
        for (int i = 0; i < N; i++) {
            if (gestures[i] == 'I') {
                isIndian = 1;
                break;
            } else if (gestures[i] == 'Y') {
                isForeign = 1;
            }
        }
        if (isIndian) {
            printf("INDIAN\n");
        } else if (isForeign) {
            printf("NOT INDIAN\n");
        } else {
            printf("NOT SURE\n");
        }
    }
    return 0;
}
