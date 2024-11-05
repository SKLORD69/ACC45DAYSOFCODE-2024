#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        int A[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &A[i][j]);
            }
        }
        
        int max_trace = 0;
        for (int start_col = 0; start_col < N; start_col++) {
            int trace = 0;
            for (int i = 0, j = start_col; i < N && j < N; i++, j++) {
                trace += A[i][j];
            }
            if (trace > max_trace) {
                max_trace = trace;
            }
        }
        
        for (int start_row = 1; start_row < N; start_row++) {
            int trace = 0;
            for (int i = start_row, j = 0; i < N && j < N; i++, j++) {
                trace += A[i][j];
            }
            if (trace > max_trace) {
                max_trace = trace;
            }
        }
        
        printf("%d\n", max_trace);
    }
    return 0;
}
