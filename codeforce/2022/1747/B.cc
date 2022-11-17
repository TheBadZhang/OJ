#include <iostream>
using namespace std;
using ll = long long;

int main () {
    int t;
	cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n == 0) {
            cout << 0 << "\n";
            continue;
        }
 
        if (n == 1) {
			cout << 1 << "\n";
            cout << 1 << " " << 2 << "\n";
            continue;
        }
		
		cout << (n+1)/2 << "\n";
        ll l = 0;
        for (ll i = 1, j = n*3; l < (n+1)/2; i += 3, j -= 3) {
            cout<<i<<" "<<j<<"\n";l++;
        }
    }
}