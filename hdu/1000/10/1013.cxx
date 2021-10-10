#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <functional>
#include <vector>

using namespace std;


long long int roots (long long int n) {
	long long int r = 0;
	while (n > 0) {
		r += n%10;
		n /= 10;
	}
	return r;
}

int main () {

	string N;
	while (cin >> N && N!="0") {
		vector <int> v (N.begin(), N.end());
		long long int r = accumulate (v.begin(), v.end (), 0, [](int n, char ch){ return n+ch-'0'; });
		// cout << r << endl;
		while ((r = roots (r)) >= 10);
		cout << r << endl;
	}

	return 0;
}