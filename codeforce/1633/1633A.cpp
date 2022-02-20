#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;
using ull = unsigned long long;


vector<int> pp = {1, 10, 100, 1000};

int main () {
	int T, n;
	cin >> T;
	while (T--) {
		cin >> n;
		int k = n;
		if (n%7 != 0) {
			for (int i = 0; i < 3; ++i) {
				if (n < pp[i]) break;
				for (int j = n>pp[i]?1:0; j <= 9; ++j) {
					k = n-((n/pp[i])%10)*pp[i]+j*pp[i];
					if (k % 7 == 0) goto endss;
				}
			}
		}
		endss:
			printf ("%d\n", k);
	}
	return 0;
}
