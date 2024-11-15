#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int swipe, max_people = 0, current_people = 0;
        int in_office[N + 1];
        
        for (int i = 1; i <= N; i++)
            in_office[i] = 0;
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &swipe);
            if (in_office[swipe] == 0) {
                in_office[swipe] = 1;
                current_people++;
                if (current_people > max_people)
                    max_people = current_people;
            } else {
                in_office[swipe] = 0;
                current_people--;
            }
        }
        
        printf("%d\n", max_people);
    }
    
    return 0;
}
