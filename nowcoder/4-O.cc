class Solution {
public:
	/**
	 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	 *
	 *
	 * @param n int整型 表示牛牛的数字
	 * @param m int整型 表示牛妹的数字
	 * @return int整型
	 */
	int solve(int n, int m) {
		if (n >= m) return n - m;
		int k = (int)sqrt(m);
		if (m - k * k > (k + 1) * (k + 1) - m) k++;
		return min(m - n, solve(n, k) + abs(m - k * k) + 1);
	}
};
