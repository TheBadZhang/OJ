#include <iostream>

using namespace std;

int main () {

	int score [5][50];
	int n, m;
	while (std::cin >> n >> m) {
		int count = 0;
		double average[5] = { 0.0 };
		double average2[60] = { 0.0 };
		for (int j = 0; j < n; ++j) {
			for (int i = 0; i < m; ++i) {
				std::cin >> score [i][j];
				average [i] += score [i][j];
				average2 [j] += score [i][j];
			}
		}
		for (int i = 0; i < m; ++i) {
			average [i] /= n;
		}
		for (int j = 0; j < n; ++j) {
			average2 [j] /= m;
		}
		for (int j = 0; j < n; ++j) {
			bool flag = true;
			for (int i = 0; i < m; ++i) {
				if (score [i][j] < average [i]) {
					flag = false;
				}
			}
			if (flag) {
				count ++;
			}
		}
		printf ("%.2lf", average2 [0]);
		for (int j = 1; j < n; ++j) {
			printf (" %.2lf", average2 [j]);
		}
		printf ("\n%.2lf", average [0]);
		for (int i = 1; i < m; ++i) {
			printf (" %.2lf", average [i]);
		}
		cout << endl << count << endl << endl;
	}



	return 0;
}