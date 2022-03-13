
class Solution {
public:
    TreeNode* helper(vector<int>& nums,int l,int r){
        if(l>r)return nullptr;
        int maxidx=l;
        for(int i=l;i<=r;i++){
            if(nums[i]>=nums[maxidx]) maxidx=i;
        }
        
       TreeNode* root=new TreeNode(nums[maxidx]);
        root->left=helper(nums,l,maxidx-1);
        root->right=helper(nums,maxidx+1,r);
        
        return root;
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        return helper(nums,0,nums.size()-1);
    }
};