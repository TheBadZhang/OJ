#include <iostream>
#include <string>
#include <algorithm>

int main () {

	std::string A, B;
	int count = 0;
	getline (std::cin, A);
	getline (std::cin, B);
	transform (A.begin (), A.end(), A.begin(), ::tolower);
	transform (B.begin (), B.end(), B.begin(), ::tolower);
	// ::toupper 参数在这不可用，也不知道为什么
	for (int a = 0, b = 0; a <= A.length () && b <= B.length (); a += 1, b += 1) {
		if (A [a] == ' ') {
			b -= 1;
			continue;
		} else if (B [b] == ' ') {
			a -= 1;
			continue;
		} else if (A [a] != B [b]) {
			std::cout << "NO";
			return 0;
		}
	}
	std::cout << "YES";


	return 0;
}