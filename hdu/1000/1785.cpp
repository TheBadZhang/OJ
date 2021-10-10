#include <cstdio>

int main() {
	int n, i, j;
	double x, y, s[100][3], temp;
	while (~scanf("%d", &n), n > 0) {
		for (i = 0; i < n; i++) {
			scanf("%lf%lf", &x, &y);
			s[i][0] = x;
			s[i][1] = y;
			s[i][2] = x / y;
		}
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
				if (s[i][2] < s[j][2]) {
					temp = s[i][0];
					s[i][0] = s[j][0];
					s[j][0] = temp;
					temp = s[i][1];
					s[i][1] = s[j][1];
					s[j][1] = temp;
					temp = s[i][2];
					s[i][2] = s[j][2];
					s[j][2] = temp;
				}
		for (i = 0; i < n - 1; i++)
			printf("%0.1lf %0.1lf ", s[i][0], s[i][1]);
		printf("%0.1lf %0.1lf\n", s[i][0], s[i][1]);
	}
	return 0;
}