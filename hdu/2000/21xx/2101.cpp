#include <iostream>
using namespace std;

int main() {
	int a, b;

	while (cin >> a >> b) {
		printf("%s\n", (a + b) % 86 ? "no" : "yes");
	}

	return 0;
}