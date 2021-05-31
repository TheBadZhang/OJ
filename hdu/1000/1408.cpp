
#include <cstdio>

int main() {
	double d, vul;
	int t;
	int i;

	while (~scanf("%lf %lf", &vul, &d)) {
		t = 0;
		i = 1;
		while (vul > 0) {
			for (int j = 0; j < i && vul > 0; j++) {
				vul -= d;
				t++;
			}
			i++;
			if (vul > 0)
				t++;
		}
		printf("%d\n", t);
	}

	return 0;
}