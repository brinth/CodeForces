#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

constexpr const char* LOG_FILENAME = "./debug.log";

template <typename T>
void LOG(const T& msg) {
    std::ofstream logfile;
    logfile.open(LOG_FILENAME, std::ofstream::app);
    logfile << msg << std::endl;
    logfile.close();
}

int main() {
    int n = 0, k = 0;
    std::cin >> n >> k;
    int val;
    int next = 0;
    int kval = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> val;
        if (i < k && val > 0) {
            ++next;
            kval = val;
        } else {
            if (val > 0 && val >= kval) {
                ++next;
            }
        }
        LOG("val: " + std::to_string(val) + " " + "kval :" + std::to_string(kval));
    }
    std::cout << next << std::endl;
    return EXIT_SUCCESS;
}