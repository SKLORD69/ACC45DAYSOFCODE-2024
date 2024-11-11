#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        
        int a1[n], b1[n], win_count = 0, extra_votes[n], votes_needed = 0;

        for (int i = 0; i < n; i++) scanf("%d", &a1[i]);
        for (int i = 0; i < n; i++) scanf("%d", &b1[i]);

        for (int i = 0; i < n; i++) {
            if (a1[i] > b1[i]) {
                win_count++;
            } else {
                extra_votes[votes_needed++] = (b1[i] - a1[i]) + 1;
            }
        }

        if (win_count >= (n / 2 + 1)) {
            printf("YES\n");
            continue;
        }

        qsort(extra_votes, votes_needed, sizeof(int), compare);

        for (int i = 0; i < votes_needed && x >= extra_votes[i]; i++) {
            x -= extra_votes[i];
            win_count++;
            
            if (win_count >= (n / 2 + 1)) break;
        }

        if (win_count >= (n / 2 + 1)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
