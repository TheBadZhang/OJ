#include <cstdio>
#include <iostream>
#include <string>


int main () {

	char list [26] = {0};
	std::string A, B, C;
	std::cin >> A >> B >> C;
	for (int a = 0; a < A.length(); a += 1) {
		if (list [A [a] - 'A'] == 0) {
			list [A [a] - 'A'] = B [a];
		} else if (list [A [a] - 'A'] != B [a]) {
			std::cout << "Failed";
			return 0;
		}
	}
	
	char list2 [26] = {0};
	for (int a = 0; a < 26; a += 1) {
		if (list [a] == 0) {
			std::cout << "Failed";
			return 0;
		} else {
			if (list2 [list [a] - 'A'] == 0) {
				list2 [list [a] - 'A'] = 'A' + a;
			} else if (list2 [list [a] - 'A'] != 'A' + a) {
				std::cout << "Failed";
				return 0;
			}
		}
	}
	
	for (auto c : C) {
		std::cout << list [c - 'A'];
	}



	return 0;
}