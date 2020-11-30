#include <iostream>

int times = 0;

void Push(int * dictionary, int num, int dic) {
	times += 1;
	static int n = 0;
	if (n < dic - 1) {
		dictionary[n] = num;
		n += 1;
	} else /* if (n == dic-1)  */{
		for (int a = 0; a < dic; a++) {
			if (a < dic-1) {
				dictionary[a] = dictionary[a+1];
			} else {
				dictionary[a] = num;
			}
		}
	}
	for (int a = 0; a < dic; a++) {
		// std::cout << dictionary[a];
	}
	// std::cout << "\n";
}

int main(int argc, char * argv[]) {

	int dic = 0;
	int arti = 0;
	std::cin >> dic >> arti;
	int * article = new int[arti];
	int * dictionary = new int[dic];

	for (int a = 0; a < dic; a++) {
		dictionary[a] = -1;
	}
	for (int a = 0; a < arti; a++) {
		std::cin >> article[a];
		bool flag = true;
		for (int b = 0; b < dic; b++) {
			if (article[a] == dictionary[b]) {
				flag = false;
				// std::cout << "find !";
			}
		}
		// std::cout << "complete compare";
		if (flag) {
			Push(dictionary, article[a], dic);
			// std::cout << "complete add";
		}
	}

	// for (int a = 0)

	std::cout << times << std::endl;




	return 0;

}