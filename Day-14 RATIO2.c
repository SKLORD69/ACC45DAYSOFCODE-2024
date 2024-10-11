#include <stdio.h>

int main() {
    int T, X, Y;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d %d", &X, &Y);
        
        int min, max;
        if (X >= Y) {
            min = Y;
            max = X;
        } else {
            min = X;
            max = Y;
        }
        
        int operations = 0;
        
        while (max < 2 * min) {
            min--;
            operations++;
        }
        
        printf("%d\n", operations);
    }

    return 0;
}
