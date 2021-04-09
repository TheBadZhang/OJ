#include <iostream>
#include <algorithm>


int main () {
	
	int n, m;
	int* arr = new int [1000000];
	bool flag = true;
	while (std::cin >> n >> m) {
		for (int i = 0; i < n; ++i) {
			scanf ("%d", &arr[i]);
		}
		std::sort (arr, arr+n, std::greater<int>());
		flag = true; 
		for (int i = 0; i < m; ++i) {
			if (flag) {
				printf ("%d", arr[i]);
				flag = false;
			} else printf (" %d", arr [i]);
		}
		printf ("\n");
	}
	
	
	
	
	return 0;
}
