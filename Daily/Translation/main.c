#include <ctype.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
    char s[101] = {0};
    char t[101] = {0};
    scanf("%s", s);
    scanf("%s", t);
    size_t slen = strlen(s);
    size_t tlen = strlen(t);

    if (slen != tlen) {
        //printf("slen = %lu, tlen = %lu\n", slen, tlen);
        printf("NO\n");
        return EXIT_SUCCESS;
    }

    for (int i = 0; i < slen; ++i) {
        if (s[i] == t[tlen - i - 1]) {
            continue;
        } else {
            //printf("Char doesn't match s[%d] = %c, t[%d] = %c\n", i, s[i], tlen - i - 1, t[tlen - i - 1]);
            printf("NO\n");
            return EXIT_SUCCESS;
        }
    }

    printf("YES\n");

    return EXIT_SUCCESS;
}