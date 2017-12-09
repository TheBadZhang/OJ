#include <string>
#include <iostream>


int main () {

	std::string A, B;
	int n;
	std::cin >> n;
	bool flag;
	for (int i = 0; i < n; i++)	{
		std::cin >> A >> B;
		if (A == B) {
			std::cout << "Tie" << std::endl;
			continue;
		}
		if (A == "Rock") {
			if (B == "Scissors") flag = true;
			if (B == "Paper")    flag = false;
		} else if (A == "Scissors") {
			if (B == "Rock")     flag = false;
			if (B == "Paper")    flag = true;
		} else if (A == "Paper") {
			if (B == "Rock")     flag = true;
			if (B == "Scissors") flag = false;
		}
		if (flag) {
			std::cout << "Player1" << std::endl;
		} else {
			std::cout << "Player2" << std::endl;
		}
	}


	return 0;
}