#include <cstdio>

unsigned int
getlength (char *list) {
	unsigned int a = 0;
	while (list [++a] != 0) {}
	return a;
}

int main () {

	char *list1 = new char [500];
	char *list2 = new char [500];
	double bi;
	scanf ("%lf%s%s", &bi, list1, list2);
	unsigned int count = 0;
	unsigned int length = getlength (list1);

	for (int a = 0; a < length; a += 1) {
		if (list1 [a] == list2 [a]) {
			count += 1;
		}
	}
	if (count/(double)length > bi) {
		printf ("yes");
	} else {
		printf ("no");
	}

	return 0;
}