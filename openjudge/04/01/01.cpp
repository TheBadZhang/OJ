#include <vector>
#include <cstdio>
#include <algorithm>

int main () {

	int n;
	scanf ("%d",&n);
	std::vector <unsigned int> list;
	for (int a = 0; a < n; a += 1) {
		unsigned int temp;
		scanf ("%u", &temp);
		list.push_back (temp);
	}
	std::sort (list.begin(), list.end());
	if (n%2==0) {
		printf ("%.1f", (list[n/2-1] + list [n/2])/2.0);
	} else {
		printf ("%.1lf", (double)(list[(n+1)/2-1]));
	}


	return 0;
}