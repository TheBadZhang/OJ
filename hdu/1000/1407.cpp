#include <iostream>
using namespace std;

int num;

int main() {
	while (cin >> num) {

		for (int i = 1; i <= 100; i++) {
			if (i * i > num)
				continue;
			for (int j = 1; j <= 100; j++) {
				if (i * i + j * j > num)
					continue;
				for (int k = 1; k <= 100; k++) {
					if (i * i + j * j + k * k == num) {
						cout << i << " " << j << " " << k << endl;
						goto AAA;
					}
				}
			}
		}
AAA:;
	}
	return 0;
}