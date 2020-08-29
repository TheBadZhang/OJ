#include <iostream>
/*
class BIGNUM {
    std::string integer, floats;
    BIGNUM (std::string s) {

    }
};
*/
int min (int a, int b) {
    return a > b ? b : a;
}
int max (int a, int b) {
    return a < b ? b : a;
}
std::string add (std::string l1, std::string l2) {
    int mi = min (l1.size (), l2.size ()), c = 0, d = 0;
    int ma = max (l1.size (), l2.size ());
    std::string r;
    for (int a = 0; a < mi; a ++) {
        c = l1 [a] + l2 [a] + d;
        r.push_back (c%10);
        d = c / 10;
    }
    for (int a = mi; a < ma; a++) {
        if (mi == l1.size ()) {
            c = d + l2 [a];
            r.push_back (c%10);
            d = c / 10;
        } else {
            c = l1 [a] + d;
            r.push_back (c%10);
            d = c / 10;
        }
    }
    return r;
}
int main () {

    int n;
    std::cin >> n;
    std::string l [251] {};
    l [0].push_back (1);
    l [1].push_back (3);
    
    for (int a = 2; a < n; a ++) {
        l [a] = add (l [a - 1], l [a - 2]);
    }
    std::cout << l3;
    return 0;
}