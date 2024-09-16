#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];  
    scanf("%s", a);       // Input string pertama
    scanf("%s", b);       // Input string kedua

    // Membandingkan panjang kedua string
    if (strlen(a) != strlen(b)) {
        printf("BERBEDA\n");  // Jika berbeda
    } else {
        // Jika sama, identik atau mirip
        if (strcmp(a, b) == 0) {
            printf("IDENTIK\n"); 
        } else {
            printf("MIRIP\n");    
        }
    }

    return 0;
}