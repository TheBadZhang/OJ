#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {

	int N;
	cin >> N;
	vector<int> nums(N);
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
	sort (nums.begin(), nums.end());
	nums.erase(unique(nums.begin(), nums.end()), nums.end());
	cout << nums.size() << endl;
	for (int i = 0; i < nums.size(); ++i) {
		if (i) cout << " ";
		cout << nums[i];
	}

	return 0;
}