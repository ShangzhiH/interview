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
    int maxDepth(TreeNode* root) {
        return getDepth(root);
        
    }
    int getDepth(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }
        
        int depth1 = getDepth(root -> left);
        int depth2 = getDepth(root -> right);
        int depth = depth1>depth2?depth1:depth2;
        return depth+1;
        
    }
};