
class Solution {
public:
    void preorder(TreeNode* root,vector<int>&ans){
        if(!root)return;
        //ans.push_back(root->val);
        
        preorder(root->left,ans);
        ans.push_back(root->val);
        preorder(root->right,ans);
        
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans1,ans2,ans;
        
        preorder(root1,ans1);
        preorder(root2,ans2);
        
        int i=0,j=0;
        while(i<ans1.size() and j<ans2.size()){
            if(ans1[i]<ans2[j]){
                
                ans.push_back(ans1[i++]);
            }else{
                
                ans.push_back(ans2[j++]);
            }
        }
        
        while(i<ans1.size()){
             
             ans.push_back(ans1[i++]);
        }
        
        while(j<ans2.size()){
             
             ans.push_back(ans2[j++]);
        }
        
        return ans;
    }
};