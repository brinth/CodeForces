#include <cstdlib>
#include <iostream>
#include <string>

// #include "logger.h"

// CodeForces::Logger logger = CodeForces::Logger();


int main(void) {
    // logger.init("Soldier_And_Bananas.log");
    int k = 0, n = 0, w = 0;
    std::cin >> k >> n >> w;
    // logger.info("k = " + std::to_string(k) + 
                // " n = " + std::to_string(n) +
                // " w = " + std::to_string(w)
            // );
    int sum_of_w_naturual_nums = (w * (w + 1)) / 2;
    // logger.info("sum_of_w_natural_nums = " + std::to_string(sum_of_w_naturual_nums));
    int money_to_lend = (k * sum_of_w_naturual_nums) - n;
    // logger.info("money_to_lend = " + std::to_string(money_to_lend));
    money_to_lend = (money_to_lend > 0) ? money_to_lend : 0;
    std::cout << money_to_lend << std::endl;
    return EXIT_SUCCESS;
}