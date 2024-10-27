#include <stdio.h>

int main() {
    int T, a, b, c, d;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        int max1, max2;
        
        if (a > b) {
            max1 = a;
        } else {
            max1 = b;
        }
        
        if (c > d) {
            max2 = c;
        } else {
            max2 = d;
        }
        
        printf("%d\n", max1 + max2);
    }
    return 0;
}
