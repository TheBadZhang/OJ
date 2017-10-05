#include <cstdio>

int main (int argc, char * argv[]) {

	int length;
	int N;
	scanf ("%d%d", &length, &N);
	bool *Tree = new bool [length+1];
	for (int a = 0; a < length+1; a += 1) {
		Tree[a] = true;
	}

	for (int a = 0; a < N; a += 1) {
		int l,m;
		scanf ("%d%d", &l, &m);
		for (int a = l; a <= m; a += 1) {
			Tree[a] = false;
		}
	}

	int times = 0;
	for (int a = 0; a < length+1; a += 1) {
		if (Tree[a]) {
			times += 1;
		}
	}

	printf ("%d", times);
	
	return 0;
}