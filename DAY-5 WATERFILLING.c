#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int b1, b2, b3;
        scanf("%d %d %d", &b1, &b2, &b3);
        int e = (b1 == 0) + (b2 == 0) + (b3 == 0);
        if (e >= 2) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }
    return 0;
}
