class Solution {
public:
    int firstUniqChar(string s) {
        
        vector<int>frq(26,0);
        for(auto ch:s)frq[ch-'a']++;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(frq[ch-'a']==1)return i;
        }
        
        return -1;
    }
};