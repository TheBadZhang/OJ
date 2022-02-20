#include <iostream>
#include <bitset>

using namespace std;
using ll = long long;

int main () {

	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		long long count = bitset<64>(n).count();
		printf ("%lld %lld\n", count, (((ll)1)<<count)-1);
	}

	return 0;
}