#include<iostream>
using namespace std;
int main() {
	int num1, num2, i; int count = 0; int n,sum, x; cin >> n;
	while (n--) {
		cin >>num1>> num2;
		if (num1 > num2)
			swap(num1, num2);
		if (num1 > 1 && num2 < 10000) {

			for (i = num1; i <= num2; i++) {

				for (x = 1, sum = 0; x <= i / 2.0; x++) {
					if (i % x == 0) {
						sum = sum + x;
					}

				}
				if (sum == i)
					count++;

			}cout << count << endl; count = 0;
		}
	}

}