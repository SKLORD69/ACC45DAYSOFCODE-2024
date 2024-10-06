#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) 
    {
        scanf("%d", &N);
        if (N == 1) 
        {
            printf("ALICE\n");
        } 
        else if(N == 2)
        {
            printf("BOB\n");
        }
        else
        {
            printf("BOB\n");
        }
    }
    return 0;
}
