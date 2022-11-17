#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int no;
		cin >> no;
		int end = no, start = 1;
		while (start < end) {
			cout << start << " " << end << " ";
			start ++;
			end --;
		}
		if (start == end) {
			cout << start;
		}
		cout << endl;
	}
}


