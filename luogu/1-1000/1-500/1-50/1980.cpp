#include <iostream>

int main(int argc, char *argv[]) {

	int n, x;
	int times = 0;
	std::cin >> n >> x;
	for (int a = 1; a <= n; a++) {
		char s[10];
		int at = a;
		int d = 0;
		while (at>0) {
			s[d] = at%10;
			if (s[d] == x) {
				times += 1;
			}
			at /= 10;
			d += 1;
		}

		// for (int b = 0; b <= d; b++) {
		// 	// std::cout << (int)b << " ";
		// 	if (s[b] == x) {
		// 		times += 1;
		// 	}
		// }
		// std::cout << "\n";
	}
	std::cout << times;
	return 0;
}