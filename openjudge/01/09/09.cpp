#include <iostream>

int main () {

	int n;
	std::cin >> n;

	int *list1 = new int [n];
	int max = 0;

	for (int a = 0; a < n; a += 1) {
		std::cin >> list1 [a];
		if (list1 [a] > max) {
			max = list1 [a];
		}
	}

	int *list2 = new int [max+1];
	for (int a = 0; a < n; a += 1) {
		list2 [list1 [a]] ++;
	}
	for (int a = 0; a <= max; a += 1) {
		std::cout << list2 [a] << std::endl;
	}


	return 0;
}