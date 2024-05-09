#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M); // Read the dimensions of the matrix

    int matrix[N][M];

    // Read the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    if (N != M) {
        printf("NO\n");
        return 0;
    }

    
    for (int i = 0; i < N; i++) {
        if (matrix[i][i] != 1 || matrix[i][N-i-1] != 1) {
            printf("NO\n");
            return 0;
        }
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if ((i != j && i != N-j-1) && matrix[i][j] != 0) {
                printf("NO\n");
                return 0;
            }
        }
    }

   
    printf("YES\n");

    return 0;
}
