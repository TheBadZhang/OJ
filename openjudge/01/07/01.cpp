#include <cstdio>
// #include <string>

int main () {

	// std::string str;
	int count = 0;
	char *str = new char [256];
	// scanf ("%s", str);

	for (int a = 0; str [a] = getchar (); a += 1) {
		if (str [a] == '\n') {
			break;
		}
	}

	for (int a = 0; a < 255; a += 1) {
		if (str [a] >= '0' && str [a] <= '9') {
			count += 1;
		}
	}

	printf ("%d", count);

	return 0;
}