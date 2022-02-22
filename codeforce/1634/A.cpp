#include <iostream>
#include <string>

using namespace std;
using ll = long long;

bool isp (const string& a) {
	for (int i = 0; i < a.size()/2; ++i) {
		if (a[i] != a[a.size()-i-1]) {
			return false;
		}
	}
	return true;
}

int main () {
	
	int T;
	string str;
	cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k;
		cin >> str;
		if (isp (str) || k==0) {
			cout << 1 << endl;
		} else {
			cout << 2 << endl;
		}
	}
	
	
	return 0;
}
