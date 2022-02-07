class Solution {
public:
    char findTheDifference(string s, string t) {
       vector<int>frq(26);
        for(char ch:s)frq[ch-'a']++;
        for(char ch:t)frq[ch-'a']--;
        
        for(int i=0;i<26;i++){
            if(abs(frq[i])==1)return i+'a';
        }
        
        return 'a';
    }
};