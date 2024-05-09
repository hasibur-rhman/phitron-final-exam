#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N;
        scanf("%d", &N);
        char S[N+1];
        scanf("%s", S); 
        int tigerWins = 0, pathanWins = 0;

        
        for (int i = 0; i < N; i++) {
            if (S[i] == 'T')
                tigerWins++;
            else if (S[i] == 'P')
                pathanWins++;
        }

       
        if (tigerWins > pathanWins)
            printf("Tiger\n");
        else if (pathanWins > tigerWins)
            printf("Pathaan\n");
        else
            printf("Draw\n");
    }

    return 0;
}
