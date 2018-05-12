#include <algorithm>
#include <iostream>
#include <string>

int k = 0;
struct L {
	unsigned long long int n;
	int t;
} *l = new L [100000];

bool
less (L a, L b) {
	return a.n < b.n ? true : false;
}
void
add (unsigned long long int n) {
	for (int a = 0; a < k; a += 1)
		if (l [a].n == n) {
			l [a].t += 1;
			return ;
		}

	l [k].n = n;
	l [k].t = 1;
	k ++;
}

int main () {

	int n;
	std::cin >> n;

	unsigned long long int a;
	for (int b = 0; b < n; b += 1) {
		scanf ("%lld", &a);
		add (a);
	}

	std::sort (l, l+k, less);

	for (int b = 0; b < k; b += 1) {
		printf ("%d %d\n", l [b].n, l[b].t);
	}




	return 0;
}