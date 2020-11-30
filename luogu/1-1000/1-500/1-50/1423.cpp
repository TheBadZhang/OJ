#include <iostream>

int main(int argc, char *argv[]) {

	int times = 0;
	double step = 2;
	double lenth = 0;
	double purpose;
	std::cin >> purpose;

	while (lenth < purpose) {
		lenth += step;
		step *= 0.98;
		times += 1;
	}

	std::cout << times;


	return 0;
}