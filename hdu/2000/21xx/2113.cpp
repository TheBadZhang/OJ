#include <cstdio>
#include <cstring>
int main() {
	char z[1010];
	int cs = 0;
	while (scanf("%s", z) != EOF) {
		if (cs)
			printf("\n");
		if (!cs)
			cs = 1;
		int l = strlen(z), s = 0;
		for (int i = 0; i < l; i++) {
			int a = z[i] - '0';
			if (a % 2 == 0)
				s += a;
		}
		printf("%d\n", s);
	}
	return 0;
}