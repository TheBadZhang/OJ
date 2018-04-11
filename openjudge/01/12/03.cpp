#include <iostream>
#include <string>


int main () {
	
	int n, count = 0;
	std::string name;
	float temp;
	int caugh;
	
	std::cin >> n;
	for (int a = 0; a < n; a += 1) {
		std::cin >> name >> temp >> caugh;
		if (temp >= 37.5 && caugh) {
			std::cout << name << std::endl;
			count += 1;
		}
	}
	std::cout << count;
	
	return 0;
}

