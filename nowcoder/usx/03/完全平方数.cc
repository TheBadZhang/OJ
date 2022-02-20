#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
using ll = long long;

int main () {
    
    int n;
    cin >> n;
    while (n--) {
        ll l, r;
        cin >> l >> r;
        r = sqrt(r);
        l = ceil(sqrt(l));
        printf ("%lld\n", r-l+1);
    }
    
    return 0;
}