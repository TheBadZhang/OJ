#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n, sum, flag = 0;
	while (cin >> n && n) {

		flag++;
		sum = 0;
		int t = n;
		int *p = new int[n];
		while (n--) {
			cin >> p[n];
			sum += p[n];
		}
		n = 0;
		sum /= t;
		while (t--) {
			if (p[t] > sum)
			{
				n += p[t] - sum;
			}
		}
		cout << "Set #" << flag << "\nThe minimum number of moves is " << n << '.' << endl << endl;
		delete[] p;
	}
}