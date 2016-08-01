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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* root1 = root;
        TreeNode* root2 = root;
        while(root1 == root2) {
            root = root1;
            if(p->val > root1->val) {
                root1 = root1->right;
            }
            else if(root1->val > p->val){
                root1 = root1->left;
            }
            
            if(q->val > root2->val) {
                root2 = root2->right;
            }
            else if(root2->val > q->val){
                root2 = root2->left;
            }
        }
        return root;
        
    }
};
