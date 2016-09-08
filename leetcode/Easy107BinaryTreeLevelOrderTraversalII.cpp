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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        list<TreeNode*> traverseList1;
        list<TreeNode*> traverseList2;
        
        vector<vector<int>> result;
        
        list<vector<int>> resultList;
        vector<int> rootVector;
        
        if(root != NULL) {
            traverseList1.push_back(root);
            
        }
        
        
        TreeNode* temp;
        vector<int> tempVector;
        while(!traverseList1.empty()) {
            
            
            temp = traverseList1.front();
            traverseList1.pop_front();
            
            tempVector.push_back(temp->val);
        
            if(temp->left != NULL) {
                traverseList2.push_back(temp->left);
            }
            
            if(temp->right != NULL) {
                traverseList2.push_back(temp->right);
            }
            
            if(traverseList1.empty()) {
                resultList.push_back(tempVector);
                tempVector.clear();
                while(!traverseList2.empty()) {
                    traverseList1.push_back(traverseList2.front());
                    traverseList2.pop_front();
                }
            }
        }
        while(!resultList.empty()) {
            result.push_back(resultList.back());
            resultList.pop_back();
        }
        
        return result;
        
    }
};