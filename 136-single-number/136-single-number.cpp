class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int el:nums)x=x^el;
        
        return x;
    }
};