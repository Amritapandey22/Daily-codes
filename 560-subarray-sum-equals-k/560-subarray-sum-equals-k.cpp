class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0,ct=0;
        for(int el:nums){
            sum+=el;
            ct+=mp[sum-k];
            mp[sum]++;
        }
        
        return ct;
    }
};