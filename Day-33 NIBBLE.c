#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        if (N % 4 == 0)
            printf("Good\n");
        else
            printf("Not Good\n");
    }
    return 0;
}