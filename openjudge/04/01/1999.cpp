#include <iostream>
#include <vector>
#include <algorithm>

int main () {

    struct LOG {
        std::string s[4];
    } t;
    std::string f;
    std::vector <LOG> log;
    int d = 0;
    while (std::cin >> f) {
        t.s [d++] = f;
        if (d % 4 == 0) log.push_back (t);
    }

    std::sort (log.begin (), log.end (), [](LOG a, LOG b){
        if (a.s [3] > b.s [3] || a.s [2] < b.s[2]) {
            return true;
        } else return false;
    });

    for (auto s : log) {
        std::cout << s.s [0] << s.s [1] << s.s [2] << s.s [3] << std::endl;
    }

    return 0;
}