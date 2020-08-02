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
    void flatten(TreeNode* root) {
        std::vector<TreeNode *> node_list;
        preOrderTraversal(root, node_list);
        for (int i = 0; i < node_list.size(); ++i) {
            node_list.at(i)->left = nullptr;
            if (i != node_list.size() - 1) {
                node_list.at(i)->right = node_list.at(i + 1);
            }  
        }
    }

    void preOrderTraversal(TreeNode *root, std::vector<TreeNode *> &node_list) {
        if (root != nullptr) {
            node_list.push_back(root);
            preOrderTraversal(root->left, node_list);
            preOrderTraversal(root->right, node_list);
        }
    }
};