#include <stdio.h>

int main() {
    int t, n, k, a[100];
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d", &n);
        scanf("%d", &k);
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        for (int i = 0; i < n; i++) {
            if (k >= a[i]) {
                printf("1");
                k -= a[i];
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
    
    return 0;
}
