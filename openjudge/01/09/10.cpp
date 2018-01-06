#include <iostream>
#include <cstdio>

void
reset (bool *list) {
	for (int a = 0; a < 100; a += 1) {
		list [a] = false;
	}
}
int main () {

	bool *list = new bool [100];
	int max = 0;
	int n, num;
	std::cin >> n;
	reset (list);
	for (int a = 0; a < n; a += 1) {
		do {
			scanf ("%d", &num);
			if (num > max) {
				max = num;
				reset (list);
			}
			if (num == max) {
				list [a] = true;
			}
		} while (getchar () != '\n');
	}
	std::cout << max << std::endl;
	bool flag = false;
	for (int a = 0; a < n; a += 1) {
		if (list [a]) {
			if (flag) {
				printf (",");
			}
			printf ("%d", a+1);
			flag = true;
		}
	}




	return 0;
}