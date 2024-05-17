1. Problem (tiger vs pathan)

   
![image](https://github.com/hasibur-rhman/phitron-final-exam/assets/71165892/b6deee3d-7bc6-48aa-ab16-f4cd4df9d287)


2.Problem (Find the Missing Number)

![image](https://github.com/hasibur-rhman/phitron-final-exam/assets/71165892/0c057c94-4f5f-4db6-9e91-c3860212fd5e)


3. problem (Jadu Matrix)


![image](https://github.com/hasibur-rhman/phitron-final-exam/assets/71165892/8220aa1a-18ae-44ae-86b5-26882fc92e10)


4.Problem (Matrix Again)


![image](https://github.com/hasibur-rhman/phitron-final-exam/assets/71165892/497b2be6-32fa-4e7d-894d-f9d6c4820098)


5.Problem (Magical Tree)

![image](https://github.com/hasibur-rhman/phitron-final-exam/assets/71165892/2eb18a4e-ded3-422b-bce8-ee074f2e9c6a)


6. Problem (Difference Array)

![image](https://github.com/hasibur-rhman/phitron-final-exam/assets/71165892/83ac0460-e2e3-4216-9301-c588d8dd137b)

gcd:
#include <stdio.h>
int main()
{
    int a, b, i, gcd;

    
    scanf("%d %d", &a, &b);

    for(i=1; i <= a && i <= b;i++)
    {
       
        if(a%i==0 && b%i==0)
            gcd = i;
    }

    printf("%d",gcd);

    return 0;
}

LCM:
#include <stdio.h>

int main() {

    int n1, n2, i, gcd, lcm;

    
    scanf("%d %d", &n1, &n2);

    
    for (i = 1; i <= n1 && i <= n2;i++) {
        
       
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("%d",lcm);
    return 0;
}


palindrome:
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
  
    scanf("%d", &n);

    int arr[n];

   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++) { 
        if (arr[i] != arr[n - i - 1]) { 
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        printf("palindrome.\n");
    } else {
        printf("not palindrome.\n");
    }

    return 0;
}

