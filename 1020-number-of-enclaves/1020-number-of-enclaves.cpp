class Solution {
public:
    vector<vector<int>>dir{{0,1},{0,-1},{1,0},{-1,0}};
    void dfs(vector<vector<int>>& grid,int r,int c){
        grid[r][c]=2;
        
        for(auto d:dir){
            int sr=r+d[0],sc=c+d[1];
            if(sr>=0 and sc>=0 and sr<grid.size() and sc<grid[0].size() and grid[sr][sc]==1){
                dfs(grid,sr,sc);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 and (i==0 or i==n-1 or j==0 or j==m-1)){
                    dfs(grid,i,j);
                }
            }
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)ans++;
            }
                
        }
        
        return ans;
    }
};