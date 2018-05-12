#include <iostream>

int get(int n, int b) {
	int i = 0;
	while (n % b == 0) {
		i ++;
		n /= b;
	}
	return i;
}
int main () {

	int a, b, f = 0, t = 0;

	std::cin >> a >> b;
	for (int c = a; c <= b; c += 1) {
		f += get (c, 5);
		t += get (c, 2);
	}
	std::cout << (f > t ? t : f);



	return 0;
}