#include <iostream>

int main () {

    int a [6];
    std::cin >> a [0] >> a [1] >> a [2] >> a [3] >> a [4] >> a [5];
    long long int r = 1;
    for (int b = 0; b < 6; b ++) {
        r *= a[b]+1;
    }
    std::cout << r;
    return 0;
}