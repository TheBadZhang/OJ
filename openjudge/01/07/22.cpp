#include <iostream>
#include <string>


int main () {

	std::string str;
	std::string name, password, email;
	// std::vector <User> list;
	int n;
	std::cin >> str >> n;
	bool flag = false;
	for (int a = 0; a < n; a += 1) {
		std::cin >> name >> password >> email;
		if (email == str) {
			flag = true;
			// change password
			std::cout << name << ' ';
			for (int b = 0; b < password.size (); b += 1) {
				if (isupper (password [b])) {
					std::cout << (char)tolower (password [b]);
				} else if (islower (password [b])) {
					std::cout << (char)toupper (password [b]);
				} else std::cout << password [b];
			}
			std::cout << "\n";
			// std::cout << ' ' << email << std::endl;
		}
	}
	if (!flag) {
		std::cout << "empty";
	}


	return 0;
}