class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      unordered_map<int,int>mp;
        vector<int>ans;
        int count=0;
        for(int el:nums){
            mp[el]++;
        }
        nums.clear();
        for(auto it:mp){
            int key=it.first;
            if(mp[key]==2){
                nums.push_back(key);
                nums.push_back(key);
                count+=mp[key];
            }
            else if(mp[key]==1){
                nums.push_back(key);
                
                count+=mp[key];
            }
            else {
                nums.push_back(key);
                nums.push_back(key);
                count+=2;
            }
        }
        sort(nums.begin(),nums.end());
        
        return count;
    }
};