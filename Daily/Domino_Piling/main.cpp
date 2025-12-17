#include <iostream>
#include <cstdlib>


int main() {
    int m = 0, n = 0;
    std::cin >> m >> n;
    long long prod = m * n;
    if (prod % 2 == 0) {
        if (m % 2 == 0 || n % 2 == 0) {
            std::cout << prod / 2 << std::endl;
        } else {
            std::cout << (prod / 2) + 2 << std::endl;
        }
    } else {
        std::cout << prod / 2 << std::endl;
    }
    return EXIT_SUCCESS;
}