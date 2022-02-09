class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int el:nums)mp[el]++;
        int count=0;
        for(auto it:mp){
            int el=it.first;
            if(k==0){
                if(mp[el]>=2)count++;
            }
            else if(mp.find(el+k)!=mp.end())count++;
        }
        
        return count;
    }
};