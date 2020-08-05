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
    bool hasPathSum(TreeNode* root, int sum) {
        std::vector<int> sums;
        getAllPath(root, sums, 0);
        for (int i = 0; i < sums.size(); ++i) {
            if (sums.at(i) == sum) {
                return true;
            }
        }
        return false;
    }

    void getAllPath(TreeNode* root, std::vector<int> &sums, int curr_sum) {
        if (root == nullptr) {
            return;
        }
        if (root->left == nullptr && root->right == nullptr) {
            sums.push_back(curr_sum + root->val);
        }
        if (root->left != nullptr) {
            getAllPath(root->left, sums, curr_sum + root->val);
        }
        if (root->right != nullptr) {
            getAllPath(root->right, sums, curr_sum + root->val);
        }
    }
};