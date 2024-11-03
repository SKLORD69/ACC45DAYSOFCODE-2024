#include <stdio.h>

int main() {
    int n, s, t, c1 = 0, c2 = 0, mL = 0, w = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &s, &t);
        c1 += s;
        c2 += t;
        int lead = c1 - c2;

        if (lead > 0 && lead > mL) {
            mL = lead;
            w = 1;
        } else if (-lead > mL) {
            mL = -lead;
            w = 2;
        }
    }

    printf("%d %d\n", w, mL);
    return 0;
}
