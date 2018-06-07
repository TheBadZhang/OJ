#include <iostream>
#include <string>


unsigned long long int
H (int a) {
	
	if (a <= 1) return 1;
	else return H (a - 1) + H (a - 2);
}
int main () {
	int n;
	std::cin >> n;
	for (int a = 0; a < n; a += 1) {
		int b;
		std::cin >> b;
		std::cout << H (b - 1) << std::endl;
	}
	return 0;
}