class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty()) {
            return 0;
        }
        int m = matrix.size(), n = matrix[0].size(), sz = 0;
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!i || !j || matrix[i][j] == '0') {
                    dp[i][j] = matrix[i][j] - '0';
                } else {
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                }
                sz = max(dp[i][j], sz);
            }
        }
        return sz * sz;
    }
};









// class Solution {
// public:
//     int maximalSquare(vector<vector<char>>& mat) {
//         int ans=0,n=mat.size(),m=mat[0].size();
//         vector<vector<int>>dp(n,vector<int>(m,0));
        
//         for(int i=dp.size()-1;i>=0;i--){
//             for(int j=dp[0].size()-1;j>=0;j--){
//                 if(i==dp.size()-1 and j==dp[0].size()-1) dp[i][j]=mat[i][j]-'0';
//                 else if(i==dp.size()-1) dp[i][j]=mat[i][j]-'0';
//                 else if(j==dp[0].size()-1)dp[i][j]=mat[i][j]-'0';
//                 else{
//                     if(mat[i][j]=='0') dp[i][j]=mat[i][j]-'0';
//                     else{
//                         dp[i][j]=min(dp[i][j+1],min(dp[i+1][j],dp[i+1][j+1]))+1;
//                         ans=max(ans,dp[i][j]);
//                         //cout<<dp[i][j]<<endl;
//                     }
//                 }
//             }
//         }
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++) cout<<dp[i][j]<<" ";
//             cout<<endl;
            
//         }
        
//         return ans;
//     }
// };