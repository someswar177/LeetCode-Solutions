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
    bool checkBST(TreeNode* root,pair<long,long> minmax){
        if(root->val<=minmax.first || root->val>=minmax.second) return false;
        pair<long,long> temp=minmax;
        bool left=true;
        if(root->left!=NULL){
            minmax.second=root->val;
            left = checkBST(root->left,minmax);
        }
        bool right=true;
        if(root->right!=NULL){
            minmax.first=root->val;
            minmax.second=temp.second;
            right = checkBST(root->right,minmax);
        }
        return left&&right;
    }
    bool isValidBST(TreeNode* root) {
        pair<long,long> minmax = {LONG_MIN,LONG_MAX};
        return checkBST(root,minmax);        
    }
};