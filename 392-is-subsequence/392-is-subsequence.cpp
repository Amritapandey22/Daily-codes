class Solution {
public:
    bool isSubsequence(string s, string t) {
        string str="";
        vector<int>frq(26);
        for(char ch:s)frq[ch-'a']++;
        int i=0;
        for(char ch:t){
            if(frq[ch-'a']>0){
                if(str.size()==0 and ch==s[0]){
                    str+=ch;
                    i++;
                }
                else if(s[i]==ch){
                   str+=ch;
                    i++;
                }
            }
        }
        
        return s==str;
    }
};