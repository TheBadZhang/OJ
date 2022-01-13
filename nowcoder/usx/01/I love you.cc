#include <cstdio>
#include <cctype>
char c, str[] = "iloveyou";
const int p = 20010905;
int f[8];

int main () {
	f[0] = 1;
	while (~scanf("%c", &c)) {
		for (int i = 0; i < 8; ++i) {
			if (tolower(c) == str[i]) {
				f[i+1] = (f[i+1]+f[i]) % p;
			}
		}
	}
	printf ("%d\n", f[8]);

	return 0;
}