#include <stdio.h>
#include <stdlib.h>


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N;
        scanf("%d", &N); 

        int A[N], B[N], C[N];

      
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);

            B[i] = A[i];
        }

       
        bubbleSort(B, N);

        
        for (int i = 0; i < N; i++) {
            C[i] = abs(A[i] - B[i]);
        }

        
        for (int i = 0; i < N; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}
