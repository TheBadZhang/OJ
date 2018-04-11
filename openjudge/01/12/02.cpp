#include <iostream>
#include <cmath>


int main () {
	
	int n;
	std::cin >> n;
	
	int words;
	double cost = 0.0;
	for (int a = 0; a < n; a += 1) {
		std::cin >> words;
		cost += ceil (words / 70.0) * 0.1;
	}
	
	std::cout << cost;
	
	
	
	
	return 0;
}