#include <iostream>
#include <cmath>
#include <cstdio>

void
print (int n) {
	if (n == 2) printf ("2");
	else if (n == 1)      printf ("2(0)");
	else
		for (int a = 20; a > 1; a -= 1) {
			if (n & 1 << a) {
				print (pow (2, a+1));
			} else continue;
		}
}

int main () {

	int n;
	std::cin >> n;
	print (n);





	return 0;
}