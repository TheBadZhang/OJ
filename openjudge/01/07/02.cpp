#include <cstdio>
// #include <string>
unsigned int
getlength (char *list) {
	unsigned int a = 0;
	while (list [++a] != 0) {}
	return a;
}

int main () {

	// std::string str;
	char count [26] = {0};
	int count2 = 0;
	char *str = new char [100000];
	scanf ("%s", str);
	int length = getlength (str);
	for (int a = 0; a < length; a += 1) {
		count [str [a] - 'a'] += 1;
	}

	for (int a = 0; a < length; a += 1) {
		if (count [str [a] - 'a'] == 1) {
			printf ("%c", str [a]);
			return 0;
		}
	}
	printf ("no");

	return 0;
}