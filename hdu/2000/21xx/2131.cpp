#include <cstdio>
#include <cstring>
#include <cctype>
int main() {
	char a[300], c1, c2;
	int ans, m, cnt;
	while (scanf("%c %s", &c1, a) != EOF) {
		cnt = 0;
		m = strlen(a);
		c1 = tolower(c1);
		ans = c1 - 'a';
		for (int i = 0; i < m; i++) {
			c2 = tolower(a[i]);
			if (ans == c2 - 'a')
				cnt++;
		}
		printf("%.5f\n", (double)cnt / m);
		getchar();
	}
	return 0;
}