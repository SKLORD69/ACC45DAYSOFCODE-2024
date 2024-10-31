#include <stdio.h>

int main() {
    int T, P, Q, totalPoints, serveTurn;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &P, &Q);
        totalPoints = P + Q;
        serveTurn = (totalPoints / 2) % 2;

        if (serveTurn == 0)
            printf("Alice\n");
        else
            printf("Bob\n");
    }

    return 0;
}
