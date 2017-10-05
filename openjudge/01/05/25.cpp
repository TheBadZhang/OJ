#include <iostream>

int main() {

	int s[3];
	int j[3];
	for (int a = 81; a <= 5143; a ++) {
		s[0] = a%7;
		s[1] = a/7%7;
		s[2] = a/7/7%7;
		j[0] = a%9;
		j[1] = a/9%9;
		j[2] = a/9/9%9;
		if (s[0] == j[2] && s[1] == j[1] && s[2] == j[0]) {
			printf("%d\n%d%d%d\n%d%d%d\n", a, j[0], j[1], j[2], s[0], s[1] , s[2]);
			break;
		}
	}




	return 0;
}