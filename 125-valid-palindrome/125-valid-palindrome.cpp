class Solution {
public:
    bool isPalindrome(string s) {
        string check;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                if(isupper(s[i]))
                {
                     s[i] = s[i] + 32;
                     check.push_back(s[i]);
                } 
                else{
                    check.push_back(s[i]);
                }
            }
               
        }
        int l=0,r=check.size()-1;
        while(l<r){
            if(check[l]!=check[r])
                return false;
            l++,r--;
        }
        
        return true;
        
    }
};