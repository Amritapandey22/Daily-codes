class Solution {
public:
    vector<vector<int>> ans;
    void solve(int n,int i,vector<int>temp,vector<int>&nums){
        if(i==n){
            ans.push_back(temp);
            return;
                
        }
        temp.push_back(nums[i]);
        solve(n,i+1,temp,nums);
        temp.pop_back();
        solve(n,i+1,temp,nums);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        solve(n,0,temp,nums);
        return ans;
        
    }
};