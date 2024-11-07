#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        printf("%d\n", N / 7 + (N % 7 >= 2 ? 1 : 0));
    }
    
    return 0;
}
