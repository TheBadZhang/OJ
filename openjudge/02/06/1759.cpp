#include <iostream>


int main() {

	int n, m = 0;
	int a[1100], b[1100];

	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cin >> a [i];
		b [i] = 1;
	}
	for (int i = 2; i <= n; i++)
		for (int j = 1; j <= i - 1; j++)
			if (a [i] > a [j] && b [j] + 1 > b [i])
				b [i] = b [j] + 1;

	for (int i = 1; i <= n; i++)
		if (m < b[i]) m = b[i];

	std::cout << m;

	return 0;
}