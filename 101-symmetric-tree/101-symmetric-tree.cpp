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
    bool isSymmetric(TreeNode* root) {
        return root==nullptr or checkSym(root->left,root->right);
    }
    
    bool checkSym(TreeNode* left,TreeNode* right){
        if(left==nullptr or right==nullptr)return right==left;
        
        if(left->val !=right->val)return false;
        
        return checkSym(left->left,right->right) and checkSym(left->right,right->left);
    }
};
