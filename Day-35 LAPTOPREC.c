#include <stdio.h>

int main() {
    int T, N, A[1000];
    scanf("%d", &T);
    
    for (int t = 0; t < T; t++) {
        scanf("%d", &N);
        
        int count[11] = {0};
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            count[A[i]]++;
        }
        
        int max_count = 0, laptop = -1, multiple = 0;
        
        for (int i = 1; i <= 10; i++) {
            if (count[i] > max_count) {
                max_count = count[i];
                laptop = i;
                multiple = 0;
            } else if (count[i] == max_count) {
                multiple = 1;
            }
        }
        
        if (multiple) {
            printf("CONFUSED\n");
        } else {
            printf("%d\n", laptop);
        }
    }
    
    return 0;
}
