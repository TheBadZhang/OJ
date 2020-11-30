#include <iostream>


int main(int argc, char *argv[]) {

	int n = 0, K;
	double Sn = 0;
	std::cin >> K;

	while (Sn <= K) {
		n += 1;
		Sn += (double)1/n;
	}
	std::cout << n << std::endl;







	return 0;
}