class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>st;
        for(int el:nums)st.insert(el);
        
        return st.size()!=nums.size();
    }
};