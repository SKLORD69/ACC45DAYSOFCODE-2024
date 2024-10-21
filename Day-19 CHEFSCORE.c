#include <stdio.h>

int main() {
	int T, N, X, Y;
	scanf("%d", &T);
	while(T--){
	    scanf("%d %d %d",&N, &X, &Y);
	    if (Y % X == 0 && Y / X <= N) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
	}
	return 0;
}

