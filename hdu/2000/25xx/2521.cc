#include <iostream>
using namespace std;

int main () {
	int n, a, b, max, sum, max_sum;

	cin >> n;
	while (n--) {
		cin >> a >> b;
		max = 1;
		max_sum = 0;
		for (int i = a; i <= b; i++) {
			sum = 0;
			for (int j = 1; j <= i/2; j++) {
				if (i%j == 0) {
					sum ++;
				}

				if (i != 1) {
					sum ++;
				}
				
				if (sum > max_sum) {
					max_sum = sum;
					max = i;
				}
			}
			cout << max << endl;
		}
	}
	return 0;
}