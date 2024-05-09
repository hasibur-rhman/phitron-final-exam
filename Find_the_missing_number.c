#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C); 
        
        long long ABC = A * B * C;

      
        if (ABC == 0) {
            if (M == 0) 
                printf("0\n");
            else
                printf("-1\n"); 
        } else {
           
            if (M % ABC == 0) {
                
                long long missingNumber = M / ABC;
                printf("%lld\n", missingNumber);
            } else {
                printf("-1\n"); 
            }
        }
    }

    return 0;
}
