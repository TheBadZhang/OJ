#include <iostream>

int main () {

    int a, n, m, x;
    std::cin >> a >> n >> m >> x;
    int c = a, d = a, e, r = a;
    for (int g = 2; g < x; g++) {
        e = c + d;
        c = d; d = e;
    }
    std::cout << r;
    return 0;
}