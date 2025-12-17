#include <cstdlib>
#include <iostream>
#include <string>
#include <set>

const std::string CHAT_SAFE_MSG = "CHAT WITH HER!";
const std::string CHAT_IGNORE_MSG = "IGNORE HIM!";

int main(void) {
    std::string name = "";
    std::cin >> name;
    std::set<char> uniq(name.begin(), name.end());
    if (uniq.size() % 2 == 0) {
        std::cout << CHAT_SAFE_MSG << std::endl;
    } else {
        std:: cout << CHAT_IGNORE_MSG << std::endl;
    }
    return EXIT_SUCCESS;
}