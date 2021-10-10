#include <iostream>

using namespace std;

int main() {

	int N;
	while (cin >> N && N) {
		int now = 0;
		int timeCost = 5*N;
		int d, m = 0;
		for (int i = 0; i < N; i++) {
			cin >> d;
			m = d-now;
			if (m < 0) {
				timeCost += 4*(-m);
			} else {
				timeCost += 6*m;
			}
			now = d;
		}
		printf ("%d\n", timeCost);
	}


	return 0;
}