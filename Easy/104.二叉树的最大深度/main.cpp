/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// 递归
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int l_depth = maxDepth(root->left);
        int r_depth = maxDepth(root->right);
        return std::max(l_depth, r_depth) + 1;
    }
};

// 非递归
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        std::stack<std::pair<TreeNode *, int>> nodes;
        int depth = 1;
        int max_depth = 1;
        nodes.push(std::pair(root, depth));
        while(!nodes.empty()) {
            TreeNode *tmp_node = nodes.top().first;
            int cur_depth = nodes.top().second;
            max_depth = std::max(cur_depth, max_depth);
            nodes.pop();
            if (tmp_node->right != nullptr) {
                nodes.push(std::pair(tmp_node->right, cur_depth + 1));
            }
            if (tmp_node->left != nullptr) {
                nodes.push(std::pair(tmp_node->left, cur_depth + 1));
            }
        }
        return max_depth;
    }
};