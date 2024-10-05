#include <stdio.h>

int isSorted(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) return 0;
    }
    return 1;
}

int canBePseudoSorted(int a[], int n) {
    int invCount = 0;
    int firstIndex = -1;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            invCount++;
            if (invCount == 1) {
                firstIndex = i;
            }
            if (invCount > 1) return 0;  // More than 1 inversion, not pseudo-sorted
        }
    }

    if (invCount == 0) return 1;  // Already sorted

    // Swap the first inversion if there is only one
    if (invCount == 1) {
        int temp = a[firstIndex];
        a[firstIndex] = a[firstIndex + 1];
        a[firstIndex + 1] = temp;

        // Check if sorted after the swap
        if (isSorted(a, n)) return 1;
    }

    return 0;  // Cannot be pseudo-sorted
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        if (canBePseudoSorted(a, n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}