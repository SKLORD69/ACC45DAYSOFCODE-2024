#include <stdio.h>
#include <string.h>

int e(const char* s) {
    int c = 0;
    const char* v = "aeiou";
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (strchr(v, s[i]) == NULL) {
            c++;
            if (c >= 4) {
                return 0;
            }
        } else {
            c = 0;
        }
    }
    return 1;
}

int main() {
    int b;
    scanf("%d", &b);
    while (b--) {
        int a;
        scanf("%d", &a);
        char S[101];
        scanf("%s", S);
        if (e(S)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
