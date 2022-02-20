#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;
using ll = long long;


int main() {
	
	int n;
	while (cin >> n) {
		cout << ll(pow(3,n)-1) << endl;
	}

	return 0;
}