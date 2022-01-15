class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int csum=0,msum=-(int)1e9;
        for(int el:nums){
            csum+=el;
            msum=max(msum,csum);
            if(csum<0)csum=0;
        }
        
        return msum;
    }
};