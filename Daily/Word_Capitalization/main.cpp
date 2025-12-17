#include <cstdlib>
#include <cctype>
#include <iostream>
#include <string>
// #include "logger.h"

// CodeForces::Logger logger = CodeForces::Logger();

int main(void) {
    // logger.init("WordCapitalization.log");
    std::string word = "";
    std::cin >> word;
    // logger.info("Input: " + word);
    // std::transform(word.begin(), word.end(), word.begin(), ::tolower);
    // logger.info("After Transform: " + word);
    std::transform(word.begin(), word.begin() + 1, word.begin(), ::toupper);
    // logger.info("Output: " + word);
    std::cout << word << std::endl;
    return EXIT_SUCCESS;
}

