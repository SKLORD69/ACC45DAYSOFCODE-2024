#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        int s1 = (500 - 2 * x) + (1000 - 4 * (x + y));
        int s2 = (1000 - 4 * y) + (500 - 2 * (x + y));
        int max_score = s1 > s2 ? s1 : s2;
        printf("%d\n", max_score);
    }
    return 0;
}
