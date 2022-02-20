class Solution {
public:
	/**
	 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	 *
	 * 返回一个数，代表让这些数都变成奇数的最少的操作次数
	 * @param n int整型 代表一共有多少数
	 * @param a int整型vector 代表n个数字的值
	 * @return int整型
	 */
	unordered_map<int, int> umap;
	int oddNumber(int n, vector<int> &a) {
		int ans = 0;
		for (int i = 0; i < n; i++) {
			while (a[i] % 2 == 0 && !umap[a[i]]) {
				umap[a[i]] = 1;
				a[i] /= 2;
				ans++;
			}
		}
		return ans;
	}
};
