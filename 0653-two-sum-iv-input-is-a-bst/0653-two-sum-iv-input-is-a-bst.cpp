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
    bool inorder(TreeNode* root,int k,unordered_set<int>& seen){
        if(!root) return false;
        if(inorder(root->left,k,seen)) return true;
        if(seen.count(k-root->val)) return true;
        seen.insert(root->val);
        return inorder(root->right,k,seen);
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> seen;
        return inorder(root,k,seen);    
    }
};