#include <iostream>
#include <cctype>

char str[1000005];

bool isyuan (char ch) {
	return (std::tolower(ch) == 'a' ||
	        std::tolower(ch) == 'e' ||
	        std::tolower(ch) == 'i' ||
	        std::tolower(ch) == 'o' ||
	        std::tolower(ch) == 'u');
}

int main () {
	while (gets (str)) {
		int s = 0, t = 0;
		while (str [s]) {
			if (!std::isalpha(str[s])) {
				printf ("%c", str[s++]);
				t = s;
			} else if (std::isalpha (str[t])) {
				++t;
			} else {
				if (!isyuan (str[s])) {
					for (int i = s+1; i < t; ++i) {
						printf ("%c", str[i]);
					}
					printf ("%c", str[s]);
				} else {
					for (int i = s; i < t; ++ i) {
						printf ("%c", str [i]);
					}
				}
				printf ("ay");
				s = t;
			}
		}
		printf ("\n");
	}
}