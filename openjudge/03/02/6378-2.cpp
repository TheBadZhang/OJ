#include <iostream>
using namespace std;
int main () {
	int a, m, n, l [200000];
	cin >> n;

	for (a = 0; a < n; a += 1)
		cin >> l [a];
	cin >> m;
	for (a = 0; a < n; a += 1)
		if (l [a] != m)
			cout << l [a] << " ";

	return 0;

}