#include <iostream>
#include <string>

int
main (int argc, char * argv[]) {
	
	char num [30] = {0};
	std::string numt;
	int rest = 0;

	std::cin >> numt;

	for (int a = 0; a < numt.size(); a += 1) {
		num [a] = numt [a] - '0';
	}

	bool flag = true;
	for (int b = 2; b <= 9; b += 1) {
		rest = num [0];
		int a = 1;
		while (a < numt.size()) {
			// std::cout << rest/k;
			rest = rest%b *10 + num [a];
			a += 1;
		}
		// printf ("\n%d %d %d %d\n", rest, b, num[0], numt.size());
		if (rest%b == 0) {
			std::cout << b << " ";
			flag = false;
		}
	}
	if (flag) {
		std::cout << "none";
	}


	return 0;
}