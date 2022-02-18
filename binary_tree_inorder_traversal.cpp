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

// Create a vector of ints from a binary tree using inorder traversal
class Solution {
public:
    vector<int> res;
    vector<int> inorderTraversal(TreeNode* root) {
       if (root != nullptr) {
           inorderTraversal(root->left);
           res.push_back(root->val);
           inorderTraversal(root->right);
       }
       return res;
    }
};
