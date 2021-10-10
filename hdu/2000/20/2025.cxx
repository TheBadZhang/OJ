#include <iostream>
#include <string>

int main () {

	std::string str;
	while (getline (std::cin, str)) {
		char max = '\0';
		for (int i = 0; i < str.size (); ++i) {
			if (str[i] > max) {
				max = str [i];
			}
		}
		for (int i = 0; i < str.size (); ++i) {
			printf ("%c", str[i]);
			if (str[i] == max) {
				printf ("(max)");
			}
		}
		printf ("\n");
	}


	return 0;
}