#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int n = 0, k = 0;
    scanf("%d %d", &n, &k); 
    // printf("You entered n = %d, k = %d\n", n, k);
    while (k) {
        if (n % 10 > 0) {
            --n;
        } else {
            n /= 10;
        }
        --k;
    }
    printf("%d\n", n);
    return EXIT_SUCCESS;
}