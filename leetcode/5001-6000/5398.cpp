/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int n;
    void bmli (TreeNode* root, int max) {
        if (root -> val >= max) {
            n ++;
            max = root -> val;
        }
        if (root -> left) bmli (root -> left, max);
        if (root -> right) bmli (root -> right, max);
    }
    int goodNodes(TreeNode* root) {
        n = 0;
        bmli (root, root -> val);
        return n;
    }
};