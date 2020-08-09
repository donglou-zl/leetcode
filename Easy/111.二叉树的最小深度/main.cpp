/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int min_dep = INT_MAX;
        if (root->left != nullptr) {
            int l_dep = minDepth(root->left);
            min_dep = l_dep;
        }
        if (root->right != nullptr) {
            int r_dep = minDepth(root->right);
            min_dep = std::min(min_dep, r_dep);
        }
        if (min_dep == INT_MAX) {
            min_dep = 1;
        } else {
            min_dep++;
        }
        return min_dep;
    }
};