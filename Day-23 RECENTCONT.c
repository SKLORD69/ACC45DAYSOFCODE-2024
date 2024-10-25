#include <stdio.h>

int main() {
    int t, n, start38, ltime108;
    char code[10];
    scanf("%d", &t);
    for (int j = 0; j < t; j++) {
        scanf("%d", &n);
        start38 = 0;
        ltime108 = 0;
        for (int i = 0; i < n; i++) {
            scanf("%s", code);
            if (code[0] == 'S') start38++;
            else ltime108++;
        }
        printf("%d %d\n", start38, ltime108);
    }
    return 0;
}
