struct node {
	int val;
	node *left = nullptr, *right = nullptr;
	node(int v) {
		val = v;
	}
};

class Solution {
public:
	vector<int> r;
	node* build(const vector<int>& pre, const vector<int>& suf, int i, int j, int n) {
		if (n <= 0) return nullptr;
		node* root = new node(pre[i]);
		if (n == 1) return root;

		int k = j;
		while (suf[k] != pre[i + 1]) ++k;
		int l = k - j + 1;	// 左子树长度

		root->left = build(pre, suf, i + 1, j, l);
		root->right = build(pre, suf, i + 1 + l, k + 1, n - 1 - l);
		return root;
	}
	void inorder(node* root) {
		if (!root) return;
		inorder(root->left);
		r.push_back(root->val);
		inorder(root->right);
	}
	/**
	 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	 *
	 * 
	 * @param n int 二叉树节点数量
	 * @param pre intvector 前序序列
	 * @param suf intvector 后序序列
	 * @return intvector
	 */
	vector<int> solve(int n, vector<int>& pre, vector<int>& suf) {
		node* root = build(pre, suf, 0, 0, n);
		inorder(root);
		return r;
	}
};