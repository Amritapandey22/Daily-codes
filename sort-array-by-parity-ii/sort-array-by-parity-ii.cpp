class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       vector<int> ans(nums.size());
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans[k]=nums[i];
                k+=2;
            }
        }
        
        k=1;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1){
                ans[k]=nums[i];
                k+=2;
            }
        }
        
        return ans;
    }
};