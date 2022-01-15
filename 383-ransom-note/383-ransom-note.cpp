class Solution {
public:
    bool canConstruct(string r, string m) {
       int count=0;
        vector<int>frq1(26,0);
        vector<int>frq2(26,0);
        
        for(char ch:r)frq1[ch-'a']++;
        for(char ch:m)frq2[ch-'a']++;
        
        for(char ch:r){
            if(frq2[ch-'a']<frq1[ch-'a']) return false;
        }
        
        return true;
    }
};