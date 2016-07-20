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
    TreeNode* invertTree(TreeNode* root) {
        invertSubTree(root);
        return root;
    }
    
    void invertSubTree(TreeNode* root) {
        if(root == NULL)
            return;
        if(root->left != NULL || root->right != NULL) {
            TreeNode* temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
        if(root->left != NULL)
            invertSubTree(root->left);
        if(root->right != NULL)
            invertSubTree(root->right);
    }
};