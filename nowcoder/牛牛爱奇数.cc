class Solution {
public:
	/**
	 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	 *
	 * ����һ��������������Щ����������������ٵĲ�������
	 * @param n int���� ����һ���ж�����
	 * @param a int����vector ����n�����ֵ�ֵ
	 * @return int����
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
