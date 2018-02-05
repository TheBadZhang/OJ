#include <iostream>

int main () {
	int L [1100] = {0};
	int n, m, t = 0, a;
	std::cin >> n;
	for (a = 0; a < n; a++) {
		std::cin >> m;
		if (!L [m]) t += 1;
		L [m]=1;
	}
	printf ("%d\n",t);
	for (a=0;a<1100;a++)
		if (L [a]) printf ("%d ",a);
	// 可以参考《编程珠玑》
}