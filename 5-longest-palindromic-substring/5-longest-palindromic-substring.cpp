class Solution {
public:
string getAnswers(string &s){
int n=s.length();

vector<vector<bool>>dp(n,vector<bool>(n));
    for(int gap=0;gap<n;gap++){
        for(int i=0,j=gap;j<n;i++,j++){
            //cout<<i;
            if(gap==0)dp[i][j]=true;
            else if(gap==1 and s[i]==s[j]){
                dp[i][j]=true;
            }else {
                dp[i][j]= s[i]==s[j] and dp[i+1][j-1];
            }
        }
    }
    int count=0,maxlen=0;
    string smax="";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //cout<<"out";
           if(dp[i][j]){
               count++;
               if(abs(j-i)+1>maxlen){
                   maxlen=abs(j-i)+1;
                   int start=min(i,j),end=max(i,j);
                   smax="";
                   for(int p=start;p<=end;p++) smax+=s[p];
               }
           }
        }
    }

    return smax;
}
    string longestPalindrome(string s) {
        
      return getAnswers(s);  
    }
};