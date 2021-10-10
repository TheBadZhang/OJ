
#include <stdio.h>
#include <algorithm>
using namespace std;
int x[1000], y[1000];
int i = 0;
int main() {
	int flag;
	flag = 0;
	while (scanf("%d %d", &x[i], &y[i])) {
		if (x[i] == 0 && y[i] == 0 && flag == 0)
			break;
		if (x[i] != 0 || y[i] != 0) {
			i++;
			flag = 1;
			continue;
		} else if (x[i] == 0 && y[i] == 0) {
			sort(x, x + i);
			sort(y, y + i);
			printf("%d %d %d %d\n", x[0], y[0], x[i - 1], y[i - 1]);
			flag = 0;
			i = 0;
			continue;
		}
	}
	return 0;
}