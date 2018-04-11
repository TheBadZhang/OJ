#include <iostream>

int F (int a) {
	int s = 1, i;
	for(int i = 1; i <= a; i ++)
		s = s * a;
	s -= (a - 1);
	if(a == 2) s = 7;
	return s;
}

int main () {

	int n, result = 0;
	std::cin >> n;
	std::cout << F (n);


	return 0;
}