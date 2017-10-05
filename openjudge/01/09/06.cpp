#include <cstdio>
#include <cmath>

bool
IsViUu (int n) {
	if (n == 1) {
		return false;
	}
	if ((n%2 == 0 && n != 2)|| n%3 == 0 || n%5 == 0) {
		return false;
	}
	for (int a = 2; a < sqrt (n); a += 1) {
		if (n % a == 0) {
			return false;
		}
	}
	return true;
}

int
main () {

	int max = 0, min = 324;
	char list [26] = {0};
	char temp = 0;
	while (temp!= '\n') {
		temp = getchar();
		list[temp - 'a'] += 1;
		// printf ("%c:%d", temp, list[temp-'a']);
	}
	for (int a = 0; a < 26; a += 1) {
		if (list [a] > max) {
			max = list [a];
		}
		if (list [a] < min) {
			if (list [a] == 0) {
				continue;
			}
			min = list [a];
		}
	}
	// printf ("%d %d", max, min);
	if (IsViUu (max-min)) {
		printf ("Lucky Word\n%d", max - min);
	} else {
		printf ("No Answer\n0");
	}


	return 0;
}