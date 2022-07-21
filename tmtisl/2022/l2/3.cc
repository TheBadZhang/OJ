#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> level[100];
int in[100];
int pt[100];
int N;
int maxt = 0;

void build_tree(int inL, int inR, int postL, int postR, int Level) {
	if (inL > inR || postL > postR)
		return;
	maxt = max(maxt, Level);
	int index = 0;
	while (in[index + inL] != pt[postR]) {
		index++;
	}
	level[Level].push_back(pt[postR]);
	build_tree(inL, inL + index - 1, postL, postL + index - 1, Level + 1);
	build_tree(inL + index + 1, inR, postL + index, postR - 1, Level + 1);
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) scanf("%d", &in[i]);
	for (int i = 0; i < N; i++) scanf("%d", &pt[i]);
	build_tree(0, N - 1, 0, N - 1, 0);

	cout << "R:";
	for (int i = 0; i <= maxt; i++) printf (" %d", level[i].back());
	puts("");
	cout << "L:";
	for (int i = 0; i <= maxt; i++)printf (" %d", level[i][0]);
	return 0;
}