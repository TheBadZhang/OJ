class Solution {
public:
	/**
	 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	 *
	 *
	 * @param n int���� ��ʾţţ������
	 * @param m int���� ��ʾţ�õ�����
	 * @return int����
	 */
	int solve(int n, int m) {
		if (n >= m) return n - m;
		int k = (int)sqrt(m);
		if (m - k * k > (k + 1) * (k + 1) - m) k++;
		return min(m - n, solve(n, k) + abs(m - k * k) + 1);
	}
};
