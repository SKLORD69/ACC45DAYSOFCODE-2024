#include <stdio.h>

void main() {
    int t, d1, d2, d3, s1, s2, s3;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d", &d1, &d2, &d3);
        scanf("%d %d %d", &s1, &s2, &s3);
        int d_total = d1 + d2 + d3;
        int s_total = s1 + s2 + s3;
        if (d_total > s_total) {
            printf("Dragon\n");
        } 
        else if (s_total > d_total) {
            printf("Sloth\n");
        }
        else {
            if (d1 > s1) {
                printf("Dragon\n");
            } 
            else if (s1 > d1) {
                printf("Sloth\n");
            } 
            else {
                if (d2 > s2) {
                    printf("Dragon\n");
                } 
                else if (s2 > d2) {
                    printf("Sloth\n");
                } 
                else {
                    printf("Tie\n");
                }
            }
        }
    }
}
