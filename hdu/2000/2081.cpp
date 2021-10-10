/* HDU2081 手机短号 */

#include <iostream>
#include <stdio.h>

using namespace std;

const int N = 11;
char a[N + 1];

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		scanf("%s", a);

		printf("6%s\n", a + 6);
	}

	return 0;
}
