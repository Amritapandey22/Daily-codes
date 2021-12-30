class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      vector<int>res(nums.size(),0);
        int idx=nums.size()-1;
        int l=0,r=nums.size()-1;
        while(l<=r){
            int leftc=nums[l]*nums[l];
            int rightc=nums[r]*nums[r];
            if(leftc>rightc){
                res[idx]=leftc;
               l++;
                
            }else{
                res[idx]=rightc;
                r--;
            }
            
            idx--;
        }
        
        return res;
    }
};