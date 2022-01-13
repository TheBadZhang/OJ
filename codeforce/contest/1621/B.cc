#include <iostream>
#include <vector>

using namespace std;
const int N = 50000;

struct segments {
	int l, r, c, o;
	friend bool operator<(segments& a, segments& b) {
		return (a.r-a.l) >
	}
} ss;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		vector <segments> S;
		cin >> n;
		for (ss.o = 0; ss.o < n; ss.o++) {
			cin >> ss.l >> ss.r >> ss.c;
			S.push_back(ss);
		}
	}



	return 0;
}