#include <iostream>

int main () {

	int a, b, c;
	std::cin >> a >> b;
	int d = 1;

	for (int c = 0; c < b; c += 1)
		d = (d*a) % 7;

	std::string s;
	switch (d) {
		case 0: s = "Sunday";    break;
		case 1: s = "Monday";    break;
		case 2: s = "Tuesday";   break;
		case 3: s = "Wednesday"; break;
		case 4: s = "Thursday";  break;
		case 5: s = "Friday";    break;
		case 6: s = "Saturday";  break;
	}

	std::cout << s;

	return 0;
}