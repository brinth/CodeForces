#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int num_students = 0;
    int t = 0;
    char arrangement[51] = {0};
    scanf("%d %d", &num_students, &t);
    scanf("%s", arrangement);

    while (t) {

        for (int i = 1; i < num_students; ++i) {
            if (arrangement[i - 1] == 'B' && arrangement[i] == 'G') {
                arrangement[i - 1] = 'G';
                arrangement[i] = 'B';
                ++i;
            }
        }
        --t;
    }

    printf("%s\n", arrangement);
    return EXIT_SUCCESS;
}
