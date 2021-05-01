#include <iostream>

using namespace std;

int main() {
	bool flag = 0;
	int data[3];
	while (cin >> data[0] >> data[1] >> data[2]) {
		for (int i = 0; i < 3; i++) {
			if (data[i] <= 168) {
				cout << "CRASH " << data[i] << endl;
				flag = 1;
			}
		}
		if (!flag)
			cout << "NO CRASH" << endl;
	}
	return 0;
}