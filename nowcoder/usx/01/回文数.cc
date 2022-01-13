#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main () {

	int jishu = 0; // 奇数个元素的个数
	int sums = 0;  // 总个数
	vector<int> nums(10);
	for (int i = 0; i < 10; ++i) {
		cin >> nums[i];
		sums += nums[i];
		jishu += nums[i]%2;
	}
	if (jishu > 1 || sums - nums[0] == 1) {
		// 奇数个元素超过 1 个（无法构成回文串），或者存在前导 0
		cout << "-1" << endl;
	} else { // 这种情况是可以生成回文串的
		string str = "";
		int num = -1;
		for (int i = 0; i < 10; ++i) {
			if (nums[i]%2) {
				num = i; // 找出这个多余的字符
				--nums[i];
			}
			str += string(nums[i]/2, i+'0');
		}
		if (nums[0]) {
			swap (str[0], str[nums[0]/2]);
		}
		cout << str;
		if (num >= 0) cout << num;
		reverse (str.begin(), str.end());
		cout << str;
	}

	return 0;
}