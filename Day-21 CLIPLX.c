#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int X, Y, min_wins;
        scanf("%d %d", &X, &Y);
        
        min_wins = (X - Y > 0) ? (X - Y) : 0;
        
        printf("%d\n", min_wins);
    }
    return 0;
}
