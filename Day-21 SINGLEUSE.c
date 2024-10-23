#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int H, X, Y, min_attacks;
        scanf("%d %d %d", &H, &X, &Y);
        
        if (H <= Y) {
            min_attacks = 1;
        } else {
            min_attacks = (H - Y + X - 1) / X + 1;
        }
        
        printf("%d\n", min_attacks);
    }
    return 0;
}
