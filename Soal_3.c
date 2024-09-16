#include <stdio.h>
#include <math.h>

int isPrime(long long N) {
    if (N <= 1) return 0;  // Angka <= 1 bukan prima
    if (N == 2 || N == 3) return 1;  // 2 dan 3 adalah bilangan prima
    if (N % 2 == 0 || N % 3 == 0) return 0;  // Bilangan genap atau habis dibagi 3 bukan prima

    for (long long i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0) return 0;
    }
    return 1; 
}

int main() {
    long long N;
    scanf("%lld", &N);  // Input bilangan N
    
    if (isPrime(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}
