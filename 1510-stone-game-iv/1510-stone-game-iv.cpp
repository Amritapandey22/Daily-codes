class Solution {
public:
    bool winnerSquareGame(int n) {
       
        vector<int>dp(n+1);
        dp[0]=false;
        dp[1]=true;
        
        for(int i=2;i<=n;i++){
            for(int k=1;i-(k*k)>=0;k++){
                if(dp[i-k*k]==false){
                    dp[i]=true;
                    break;
                }
            }
        }
        
        return dp[n];
    }
};
//70