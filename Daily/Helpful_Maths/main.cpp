#include <cstdlib>
#include <iostream>
#include <cctype>
#include <queue>

#undef DEBUG


int main(void) {
    std::string s = "";
    std::priority_queue<char, std::vector<char>, std::greater<char>> pq;
    std::cin >> s;
    for (const char &c : s) {
        if (isdigit(c)) {
            pq.push(c);
        }
    }
#if defined(DEBUG)
    std::priority_queue<char, std::vector<char>, std::greater<char>> temp = pq;
    while (!temp.empty()) {
        std::cout << temp.top() << ", ";
        temp.pop();
    }
    std::cout << std::endl;
#endif
    std::string o = "";
    while (!pq.empty()) {
        o += pq.top();
        o += "+";
        pq.pop();
    }
    o.pop_back();
    std::cout << o << std::endl;
    return EXIT_SUCCESS;
}