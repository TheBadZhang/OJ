#include <iostream>
#include <string>



int main () {
	
	std::string str;
	int list [26] = {};
	
	for (int b = 0; b < 4; b += 1) {
		
		std::getline (std::cin, str);
		
		for (int a = 0; a < str.size (); a += 1) {
			if (str [a] >= 'A' && str [a] <= 'Z') {
				list [str [a] - 'A'] += 1;
				// std::cout << "Add  ";
			}
		}
		
	}
	// 输入
	
	// std::cout << list [0];
	 
	int max = 0;
	for (int a = 0; a < 26; a += 1) {
		if (list [a] > max) max = list [a];
	}
	
	for (int a = max; a > 0; a -= 1) {
		for (int b = 0; b < 26; b += 1) {
			if (list [b] >= a) {
				std::cout << "* ";
			} else std::cout << "  ";
		}
		std::cout << std::endl;
	}
	for (int a = 0; a < 26; a += 1) {
		// std::cout << ">???";
		std::cout << (char)('A' + a) << ' ';
	}
	
	
	
	return 0;
}


