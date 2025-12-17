#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    char word[110] = {};

    fgets(word, sizeof(word), stdin);

    int upper_case_count = 0;
    int lower_case_count = 0;

    for (char* ptr= word; *ptr != '\0'; ++ptr) {
        char ch = *ptr;
        if (isupper(ch)) {
            ++upper_case_count;
        } else if (islower(ch)) {
            ++lower_case_count;
        } else {
            continue;
        }
    }

    if (upper_case_count > lower_case_count) {
        int i = 0;
        while (word[i] != '\0') {
            word[i] = toupper(word[i]);
            i++;
        }
    } else {
        int i = 0;
        while (word[i] != '\0') {
            word[i] = tolower(word[i]);
            i++;
        }
    }

    printf("%s", word);

    return EXIT_SUCCESS;
}