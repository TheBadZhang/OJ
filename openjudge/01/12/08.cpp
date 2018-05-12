#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>

char p2m (char M, char k) {
	return (tolower(M)-'a'+tolower(k)-'a') % 26 + (M > 'Z' ? 'a' : 'A');
}

int main () {

	std::string M, k;
	std::cin >> k >> M;

	for (int a = 0; a < M.size (); a += 1) {
		printf ("%c", p2m (M [a], k [a%k.size ()]));
	}


	return 0;
}