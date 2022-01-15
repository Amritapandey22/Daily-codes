class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int el:nums1){
            mp[el]++;
        }
        
        for(int el:nums2){
            if(mp[el]>0){
                ans.push_back(el);
                mp[el]--;
            }
        }
        
        return ans;
    }
};