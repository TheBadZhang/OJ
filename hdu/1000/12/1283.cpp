#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	int m1, m2, len, i;
	char str[250];
	while (~scanf("%d %d", &m1, &m2)) {
		int r1 = 0, r2 = 0, r3 = 0;
		getchar();
		scanf("%s", str);
		len = strlen(str);
		for (i = 0; i < len; i++) {
			if (str[i] == 'A')
				r1 = m1;
			else if (str[i] == 'B')
				r2 = m2;
			else if (str[i] == 'C')
				m1 = r3;
			else if (str[i] == 'D')
				m2 = r3;
			else if (str[i] == 'E')
				r3 = r1 + r2;
			else if (str[i] == 'F')
				r3 = r1 - r2;
		}
		printf("%d,%d\n", m1, m2);
	}
	return 0;
}