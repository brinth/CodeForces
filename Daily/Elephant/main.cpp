#include <array>
#include <cstdlib>
#include <iostream>
// #include "logger.h"

// CodeForces::Logger logger = CodeForces::Logger();

int main(void) {
    // logger.init("Elephant.log");
    int target = 0;
    std::cin >> target;
    int cur_pos = 0;
    std::array<int, 5> moves = {1, 2, 3, 4, 5};
    int steps = 0;

    while (target - cur_pos > 0) {
        int delta = target - cur_pos;
        // logger.info("delta: " + std::to_string(delta));
        int i = moves.size() - 1;
        while (moves[i] > delta && i > 0) {
            --i;
        }
        cur_pos += moves[i];
        ++steps;
        // logger.info("moves[i] = " + std::to_string(moves[i]) + " steps = " + std::to_string(steps)
        // + " cur_pos = " + std::to_string(cur_pos));
    }
    std::cout << steps << std::endl;
    return EXIT_SUCCESS;
}