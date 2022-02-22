#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;
using ull = unsigned long long;




int main () {
	int i, n;
	for (i = 0; i < 25; ++i) {
		scanf ("%d", &n);
		if (n) break;
	}
	printf ("%d\n", abs(i/5-2)+abs(i%5-2));
	
	return 0;
}
