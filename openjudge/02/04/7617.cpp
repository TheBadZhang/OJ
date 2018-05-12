#include <iostream>
#include <cstdio>
#include <algorithm>

bool

less (int a, int b) {
	return a > b ? true : false;
}

int main () {
	
	int k, n, *marks = new int [100000];

	std::cin >> n;
	for (int a = 0; a < n; a += 1)
		scanf ("%d", &marks [a]);

	std::sort (marks, marks+n, less);
	
	std::cin >> k;
	for (int a = 0; a < k; a += 1)
		printf ("%d\n", marks [a]);
	
	return 0;
}