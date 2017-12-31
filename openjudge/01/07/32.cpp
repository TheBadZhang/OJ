#include <iostream>
#include <string>

int main () {

	std::string str;
	std::cin >> str;

	char ch, comp = 0;
	int num = 0;
	
	comp = toupper (str [0]);

	for (int a = 0; a < str.size (); a += 1) {
		if (comp == toupper (str [a])) {
			num += 1;
		} else {
			if (comp != 0) {
				printf ("(%c,%d)", comp, num);
			}
			comp = toupper (str [a]);
			num = 1;
		}
	}
	printf ("(%c,%d)", comp, num);



	return 0;
}