#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(string a, string b) {
	return (a+b)>(b+a);
}

int main () {

	int n, nn;
	cin >> n;
	vector<string> nums(n);
	while (n--) cin >> nums[n];
	sort (nums.begin(), nums.end(), cmp);
	for (const auto& num : nums) cout << num;

	return 0;
}