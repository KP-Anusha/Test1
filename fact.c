#include <stdio.h>
void fact() {
    unsigned long long fact = 1;
    unsigned long long n=0;
    unsigned long long i=0;
    printf("Enter an integer: ");
    scanf("%d", &n);

  
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n\n", n, fact);
    }

    
}
