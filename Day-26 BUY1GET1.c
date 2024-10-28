#include <stdio.h>
#include <string.h>

int main() {
    int T, i, j;
    scanf("%d", &T);
    
    while (T--) {
        char S[201];
        int count[128] = {0}, totalCost = 0;
        scanf("%s", S);
        
        for (i = 0; S[i] != '\0'; i++) {
            count[S[i]]++;
        }
        
        for (j = 0; j < 128; j++) {
            if (count[j] > 0) {
                totalCost += (count[j] + 1) / 2;
            }
        }
        
        printf("%d\n", totalCost);
    }
    
    return 0;
}
