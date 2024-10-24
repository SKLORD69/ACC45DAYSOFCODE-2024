#include <stdio.h>
#include <string.h>

int has_repeated_char(char *s, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (s[i] == s[j]) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int T, N, i;
    char S[101];
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%d", &N);
        scanf("%s", S);
        if (has_repeated_char(S, N)) {
            printf("%d\n", N - 2);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
