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
    int maxDepth(TreeNode* root) {
        if(root==nullptr)return 0;
        
        queue<TreeNode*>q;
        q.push(root);
        
        int ht=0;
        while(q.size()){
            int qsize=q.size();
            while(qsize--){                
              TreeNode* node=q.front(); q.pop();
              if(node->left)q.push(node->left);
              if(node->right)q.push(node->right);                 
            }
            ht++;
        }
        
        return ht;        
    }
};