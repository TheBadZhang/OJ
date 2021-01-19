#include <iostream>


int W [51][51][51] = {0};
long long int w (int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	} else if (a > 20 || b > 20 || c > 20) {
		W [a][b][c] = w (20, 20, 20);
	}

	if (W [a][b][c] != INT_MIN) {
		return W [a][b][c];
	}

	if (a < b && b < c) {
		W [a][b][c] = w (a, b, c-1) + w (a, b-1, c-1) - w (a, b-1, c);
	} else {
		W [a][b][c] = w (a-1,b,c) + w (a-1,b-1,c) + w(a-1,b,c-1)-w(a-1,b-1,c-1);
	}
	return W [a][b][c];
}

int main () {

	int a, b, c;
	for (int i = 0; i<51; i++) {
		for (int j = 0; j<51; j++) {
			for (int k = 0; k<51; k++) {
				W [i][j][k] = INT_MIN;
			}
		}
	}
	while (std::cin >> a >> b >> c) {
		if (a == -1 && b == -1 && c == -1) {
			break;
		}
		printf ("w(%d, %d, %d) = %lld\n", a, b, c, w (a, b, c));
	}





	return 0;
}