class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       unordered_map<int,int>mp;
        mp[0]=-1;
        int count=0,len=0;
        for(int i=0;i<nums.size();i++){
            count+=nums[i]==0?-1:1;
            if(mp.find(count)!=mp.end()){
                len=max(len,i-mp[count]);
            }else mp[count]=i;
        }
        
        return len;
    }
};