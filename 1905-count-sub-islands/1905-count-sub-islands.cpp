class Solution {
public:
    vector<vector<int>>dir{{0,1},{0,-1},{1,0},{-1,0}};
    bool dfs_sub(vector<vector<int>>& grid1, vector<vector<int>>& grid2,int i,int j){
        grid2[i][j]=0;
        bool res=true;
        for(auto d:dir){
            int r=i+d[0];
            int c=j+d[1];
            
            if(r>=0 and c>=0 and r<grid1.size() and c<grid1[0].size() and grid2[r][c]==1){
               res= dfs_sub(grid1,grid2,r,c) and res;
            }
        }
        
        return res and (grid1[i][j]==1);
        
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n=grid1.size();
        int m=grid1[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1){
                    count += dfs_sub(grid1, grid2, i, j);
                }
            }
        }
        
        return count;
    }
};



















// class Solution {
// public:
//     vector<vector<int>> dir {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
//     int n;
//     int m;
//     bool dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j) {
//         grid2[i][j] = 0;
//         bool res = true;
//         for (int d = 0; d < dir.size(); ++d) {
//             int x = i + dir[d][0];
//             int y = j + dir[d][1];
//             if (x >= 0 and y >= 0 and x < n and y < m and grid2[x][y] == 1) {
//                 res = dfs(grid1, grid2, x, y) and res;
//             }
//         }
//         return grid1[i][j] == 1 and res;
//     }
//     int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
//         n = grid1.size();
//         m = grid1[0].size();
//         int count = 0;
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < m; ++j) {
//                 if (grid2[i][j] == 1) {
//                     count += dfs(grid1, grid2, i, j) ? 1 : 0;
//                 }
//             }
//         }
//         return count;
//     }
// };