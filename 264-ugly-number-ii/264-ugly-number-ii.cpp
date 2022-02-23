class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>dp(n+1,0);
        
        dp[1]=1;
        int p2=1;
        int p3=1;
        int p5=1;
        for(int i=2;i<=n;i++){
            int f1=2*dp[p2];
            int f2=3*dp[p3];
            int f3=5*dp[p5];
            
            dp[i]=min(f1,min(f2,f3));
            
            if(f1==dp[i])p2++;
            if(f2==dp[i])p3++;
            if(f3==dp[i])p5++;
        }
        
        return dp[n];
    }
};