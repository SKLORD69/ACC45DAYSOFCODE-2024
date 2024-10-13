#include <stdio.h>
#include <string.h>

void encodeMessage(int N, char S[]) {
    for (int i = 0; i < N - 1; i += 2) {
        char temp = S[i];
        S[i] = S[i + 1];
        S[i + 1] = temp;
    }
    for (int i = 0; i < N; i++) {
        S[i] = 'z' + 'a' - S[i];
    }
    printf("%s\n", S);
}

int main() {
    int T, N;
    char S[101];
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        scanf("%s", S);
        encodeMessage(N, S);
    }
    return 0;
}
