#include <cstdlib>
#include <iostream>
#include <string>

// #include "logger.h"

// CodeForces::Logger logger = CodeForces::Logger();

int main(void) {
    // logger.init("Stones_On_The_Table.log");
    int row = 0;
    std::cin >> row;
    std::string stones = "";
    std::cin >> stones;

    // logger.info("row = " + std::to_string(row) + " stones = " + stones);

    if (row <= 1) {
        std::cout << "0" << std::endl;
        return EXIT_SUCCESS;
    }

    int min_stones = 0;
    for (int i = 1; i < row; ++i) {
        // logger.info("i = " + std::to_string(i) + " min_stones = " + std::to_string(min_stones));
        if (stones[i - 1] ==  stones[i]) {
           ++min_stones; 
        }
    }

    std::cout << min_stones << std::endl;
    return EXIT_SUCCESS;
}