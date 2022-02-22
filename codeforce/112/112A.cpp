#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;
using ull = unsigned long long;




int main () {
	string a, b;
	int n = 0;
	cin >> a >> b;
	for (int i = 0; i < a.size(); ++i) {
		if (tolower(a[i]) < tolower(b[i])) {
			n = -1;
			break;
		} else if (tolower(a[i]) > tolower(b[i])) {
			n = 1;
			break;
		}
	}
	printf ("%d\n", n);
	return 0;
}
