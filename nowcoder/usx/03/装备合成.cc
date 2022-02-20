#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
using ll = long long;

int main () {

    int t;
    cin >> t;
    while(t--) {
		int x, y;
        cin >> x >> y;
        ll l = 0, r = 1e9;
        int cnt = 0;
        while (l < r) {
            int mid = (l+r)/2;
    		ll L = max(4*mid-x, 0);
			ll R = min(2*mid, y-mid);
            if (L==R ? L%2==0 : L<R) l = mid+1;
            else r = mid;
        }
        cout << l-1 << endl;
    }
    
    return 0;
}