#include <stdio.h>
#include <stdlib.h>

int main() {
    int T, N, X, Y;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &N, &X, &Y);
        int count = 2 * (N - 1); 
        count += (N - 1 - abs(X - Y)); 
        count += (N - 1 - abs(X + Y - N - 1)); 
        printf("%d\n", count);
    }
    return 0;
}
