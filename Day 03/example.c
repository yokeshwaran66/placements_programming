#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0; // 0 and 1 are not prime
    if (n == 2 || n == 3) return 1; // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return 0;

    // Only check up to √n using 6k ± 1 optimization
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main() {
    int x;
    if (scanf("%d", &x) != 1 || x < 0) {
        printf("is Not a Prime Number\n");
        return 1;
    }

    if (isPrime(x))
        printf("%d is a Prime Number\n", x);
    else
        printf("%d is Not a Prime Number\n", x);
        
    return 0;
}