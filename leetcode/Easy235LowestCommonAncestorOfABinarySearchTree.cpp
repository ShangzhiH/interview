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
        vector<TreeNode*> pathP, pathQ;
        findPath(root, p, pathP);
        findPath(root, q, pathQ);
        int i = 0;
        
        while(pathP[i] == pathQ[i]) {
            i++;
        }
        cout<<i;
        return pathP[i-1];
    }
    
    void findPath(TreeNode* beginNode, TreeNode* destination, vector<TreeNode*> path) {
        if(beginNode == NULL)
            return;
        if(beginNode->val == destination->val) {
            path.push_back(destination);
            return; 
        }
        
        findPath(beginNode->left, destination, path);
        if(path.size() == 0) {
            path.push_back(beginNode);
            return;
        }
        findPath(beginNode->right, destination,path);
        if(path.size() == 0) {
            path.push_back(beginNode);
            return;
        }
        return;    
        
    }
};
int main() {
    Solution s = new Solution();
    TreeNode* root = new TreeNode(2);
    root->left = newTreeNode(1);
    TreeNode* p = root->left;
    TreeNode* result = s.lowestCommonAncestor(root, p, root);
    cout<<result->val;
}