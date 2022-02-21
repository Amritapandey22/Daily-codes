class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0,fans;
        for(int el:nums){
           mp[el]++;
            if(mp[el]>ans){
                ans=mp[el];
                fans=el;
            }
        }
        
        return fans;
    }
};