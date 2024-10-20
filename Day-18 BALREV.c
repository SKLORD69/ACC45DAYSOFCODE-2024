#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        char A[100005];
        scanf("%d", &N);
        scanf("%s", A);
        int count0 = 0, count1 = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] == '0') count0++;
            else count1++;
        }
        for (int i = 0; i < count0; i++) printf("0");
        for (int i = 0; i < count1; i++) printf("1");
        printf("\n");
    }
    return 0;
}
