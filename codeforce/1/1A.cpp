#include <iostream>
#include <string>

using namespace std;
using ll = long long;
using ull = unsigned long long;




int main () {
	
	ll n, m, a;
	cin >> n >> m >> a;
	cout << ((n+a-1)/a)*((m+a-1)/a) << endl;
	
	return 0;
}
