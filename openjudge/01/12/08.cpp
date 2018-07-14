#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>

char p2m (char M, char k) {
	char lm = tolower(M) - 'a', lk = tolower(k) - 'a';
	char base = (M > 'Z' ? 'a' : 'A');
	// return (lm + lk) % 26 + base;
	// 加密
	return (lk > lm ? lm + 26 : lm) - lk + base;
}
int main () {

	std::string M, k;
	std::cin >> k >> M;
	// printf ("%c", p2m ('g', 'p'));
	for (int a = 0; a < M.size (); a += 1) {
		printf ("%c", p2m (M [a], k [a%k.size ()]));
	}

	return 0;
}