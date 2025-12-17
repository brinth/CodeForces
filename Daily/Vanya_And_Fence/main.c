#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
    int n = 0, h = 0;
    scanf("%d %d", &n, &h);
    int height= 0, count = 0, res = 0;
    do {
        scanf("%d", &height);
        if (height > h) {
            res += 2;
            continue;
        }
        ++res;
    } while (getchar() != '\n' && count < n);
    printf("%d\n", res);
    return EXIT_SUCCESS;
}