#include <iostream>


int main () {


	int list [15] = {0};
	int a = -1, count = 0;
	do {
		a += 1;
		std::cin >> list [a];
	} while (list [a] != 0);
	

	for (int b = 0; b < a; b += 1)
		for (int c = b; c < a; c += 1)
			if (list [b]*2 == list [c] ||
			    list [c]*2 == list [b])
					count += 1;
	
	
	std::cout << count;


	return 0;
}