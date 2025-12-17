#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int num_of_games = 0;
    scanf("%d", &num_of_games);
    char result[num_of_games];
    scanf("%s", result);
    //fgets(result, num_of_games, stdin);

    // printf("no of games: %d \n result: %s\n", num_of_games, result);

    int i = 0;
    int games_anton_won = 0;
    int games_danik_won = 0;

    while (result[i]) {
        if (result[i] == 'A') {
            ++games_anton_won;
        } else {
            ++games_danik_won;
        }
        ++i;
    }

    if (games_anton_won > games_danik_won) {
        printf("Anton\n");
    } else if (games_anton_won < games_danik_won) {
        printf("Danik\n");
    } else {
        printf("Friendship\n");
    }

    return EXIT_SUCCESS;
}