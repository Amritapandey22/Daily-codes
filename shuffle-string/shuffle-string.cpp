class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
     string sc=s;
        for(int i=0;i<ind.size();i++){
            sc[ind[i]]=s[i];
        }
        return sc;
    }
};