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
    vector<TreeNode*> generateTrees(int n) {
        if (n == 0) {
            return {};
        } else {
            return doGenerateTrees(1, n);
        }
    }

    vector<TreeNode*> doGenerateTrees(int start, int end) {
        if (start > end) {
            return {nullptr};
        }
        vector<TreeNode*> vec_ret;
        for (int i = start; i <= end; ++i) {
            vector<TreeNode*> lp = doGenerateTrees(start, i - 1);
            vector<TreeNode*> rp = doGenerateTrees(i + 1, end);
            for (int j = 0; j < lp.size(); ++j) {
                for (int k = 0; k < rp.size(); ++k) {
                    TreeNode *cur = new TreeNode(i);
                    cur->left = lp.at(j);
                    cur->right = rp.at(k);
                    vec_ret.push_back(cur);
                }
            }
        }
        return vec_ret;
    }
};