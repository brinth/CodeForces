#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>


bool is_beautiful(int year) {
    int map[10] = {0};
    while (year) {
        int digit = year % 10;
        if (map[digit]) {
            return false;
        }
        ++map[digit];
        year /= 10;
    }
    return true;
}

int main(void) {
    int year = 0;
    scanf("%d", &year);
    for (int i = year + 1; i < 10000; ++i) {
        if (is_beautiful(i)) {
            printf("%d\n", i);
            return EXIT_SUCCESS;
        }
    }
    return EXIT_SUCCESS;
}