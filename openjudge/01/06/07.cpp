#include <cstdio>
#include <algorithm>
#include <vector>


int main(int argc, char *argv[]) {

	int n;
	scanf_s("%d", &n);
	int *list = new int [n];

	for (int a = 0; a < n; a += 1) {
		scanf_s("%d", &list[a]);
	}
	std::vector<int> lists;
	for (int a = 0; a < n-1; a += 1){
		lists.push_back (abs (list[a]-list[a+1]));
	}
	std::sort (lists.begin(), lists.end());
	bool flag = true;
	for (int a = 0; a < n-2; a += 1) {
		// printf("%d\t", lists[a]);
		if (lists[a] == lists[a+1] - 1) {

		} else {
			flag = false;
			printf("Not jolly");
			return 0;
		}
	}
	if (flag) {
		printf("Jolly"); 
	}

	return 0;
}