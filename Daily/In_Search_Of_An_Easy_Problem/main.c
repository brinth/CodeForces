#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int num_participants = 0;
    scanf("%d", &num_participants);
    for (int i = 0; i < num_participants; ++i) {
        int response = 0;
        scanf("%d", &response);
        if (response) {
            printf("HARD\n");
            return EXIT_SUCCESS;
        }
    }
    printf("EASY\n");
    return EXIT_SUCCESS;
}