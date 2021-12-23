class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>frq(26,0);
        for(char ch:s){
            frq[ch-'a']++;
        }
        
        for(char ch:t){
            frq[ch-'a']--;
        }
        
        for(int i=0;i<26;i++){
            if(frq[i]!=0)return false;
        }
        
        return true;
    }
};