#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int num_of_rooms = 0;
    scanf("%d", &num_of_rooms);
    int result = 0;
    for (int i = 0; i < num_of_rooms; ++i) {
        int occupancy = 0, capacity = 0;
        scanf("%d %d", &occupancy, &capacity);
        if (capacity - occupancy >= 2) {
            ++result;
        }
    }
    printf("%d\n", result);
    return EXIT_SUCCESS;
}