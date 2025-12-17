#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#define ARRAY_LEN(arr) (sizeof(arr) / sizeof(arr[0]))


int main(void) {
    int lucky_numbers[] = {4, 7};    
    int64_t input = 0;
    scanf("%lld", &input);
    int num_lucky_numbers = 0;

    while (input) {
        int rem = input % 10;
        for (uint8_t i = 0; i < ARRAY_LEN(lucky_numbers); ++i) {
            if (lucky_numbers[i] == rem) {
                ++num_lucky_numbers;
            }
        }
        input /= 10;
    }

    if (num_lucky_numbers == 4 || num_lucky_numbers == 7) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return EXIT_SUCCESS;
}