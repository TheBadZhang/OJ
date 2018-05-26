#include <iostream>


int main () {

	float x, a, y, b;
	std::cin >> x >> a >> y >> b;
	
	printf ("%.2f", (x*a-y*b)/(a-b));
}