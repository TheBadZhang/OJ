#include <iostream>

using namespace std;

struct Node {
	int a;
	int nt;
};

int main() {
	Node p[100001];

	int ad, n, addr, m, next, cnt, l, r, x;
	int arr1[100001], arr2[100001];

	scanf("%d%d", &ad, &n);
	while (n--) {
		scanf("%d%d%d", &addr, &m, &next);
		p[addr].a = m;
		p[addr].nt = next;
	}
	cnt = 0;
	while (ad != -1) {
		arr1[cnt++] = ad;
		ad = p[ad].nt;
	}
	x = 0, l = 0, r = cnt - 1;
	while (l <= r) {
		if (l == r)
			arr2[x++] = arr1[l++];
		else {
			arr2[x++] = arr1[r--];
			arr2[x++] = arr1[l++];
		}
	}
	for (int i = 0; i < (x - 1); i++)
		printf("%05d %d %05d\n", arr2[i], p[arr2[i]].a, arr2[i + 1]);
	printf("%05d %d -1\n", arr2[x - 1], p[arr2[x - 1]].a);
	return 0;
}
