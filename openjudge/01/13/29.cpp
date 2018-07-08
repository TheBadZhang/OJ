#include <iostream>


int main () {

	std::string str;
	std::cin >> str;
	int lt [26] {0};
	int max = 0, mn;

	for (char a : str) lt [a - 'a'] ++;
	for (int a = 0; a < 26; a += 1) {
		if (lt [a] > max) {
			max = lt [a];
			mn = a;
		}
	}
	std::cout << (char)(mn+'a') << " " << max;

	return 0;
}