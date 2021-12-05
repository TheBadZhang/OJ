#include <iostream>
#include <cstdio>

int main () {
	long long int a, b;
	while (std::cin >> a >> b) {
		if (a==b) {
			printf ("YES\n");
		} else {
			printf ("NO\n");
		}
	}
	return 0;
}