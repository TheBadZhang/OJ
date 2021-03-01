#include <string>
#include <iostream>
#include <cctype>

int main () {

	int n;
	std::string str;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		int count = 0;
		std::cin >> str;
		for (int j = 0; j < str.size(); ++j) {
			if (isdigit (str[j])) ++count;
		}
		printf ("%d\n", count);
	}

	return 0;
}