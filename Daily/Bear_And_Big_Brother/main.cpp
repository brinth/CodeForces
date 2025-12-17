#include <cstdlib>
#include <iostream>


int main(void) {
    int a = 0, b = 0;
    std::cin >> a >> b;
    int years = 0;
    while (a <= b) {
        a = 3 * a;
        b = 2 * b;
        ++years;
    }
    std::cout << years << std::endl;
    return EXIT_SUCCESS;
}