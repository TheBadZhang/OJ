#include <iostream>
#include <string>

bool IsPrimeNumber(int num) {
    if (num%2 == 0 && num > 2 || num < 2) {
        return false;
    } else {
        for (int a = num-1; a > 2; a -= 1) {
            if (num % a == 0) {
                return false;
            }
        }
        return true;
    }
}

int main(int argc, char *argv[]) {
    /* int n;
    while (true) {
        std::cin >> n;
        if (IsPrimeNumber(n))
            std::cout << "Yes" << std::endl;
        else 
            std::cout << "No"  << std::endl;
    } */

    std::string str;
    std::cin >> str;

    int list[26] = {};
    int maxn = 0,
        minn = 200;

    for (auto a : str) {
        if (a >= 'a' && a <= 'z')
            list[a-'a'] += 1;
        else if (a >= 'A' && a <= 'Z')
            list[a-'A'] += 1;
    }
    for (auto a : list) {
        if (a > maxn)
            maxn = a;
        else if (a < minn && a != 0)
            minn = a;
    }
    if (IsPrimeNumber(maxn-minn))
        std::cout << "Lucky Word" << '\n' << maxn - minn << std::endl;
    else
        std::cout << "No Answer" << '\n' << 0 << std::endl;

    return 0;
}