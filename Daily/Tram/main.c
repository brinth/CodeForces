#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main(void) {
    int num_stops = 0;
    int max_capacity = 0;
    int cur_headcount = 0;
    scanf("%d", &num_stops);
    do {
        // printf("stop: %d\n", num_stops);
        unsigned in_passengers = 0;
        unsigned out_passengers = 0;
        scanf("%d %d",
            &out_passengers,
            &in_passengers);
        int delta = in_passengers - out_passengers;
        cur_headcount = cur_headcount + delta;
        max_capacity = MAX(max_capacity, cur_headcount);
        --num_stops;
    } while(num_stops > 0);
    printf("%d\n", max_capacity);
    return EXIT_SUCCESS;
}