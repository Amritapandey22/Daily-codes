class Solution {
public:
    int titleToNumber(string ct) {
        //vector<int>word(26,0);
        int output=0,n=ct.length();
        for(int i=0;i<n;i++){
            output*=26; 
            output+=(ct[i]-'A'+1);
        }
        
        return output;
    }
};