// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    vector<vector<int>>dir{{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}};
    int dfs(int i,int j,vector<vector<int>>& grid){
        grid[i][j]=0;
        int size=0;
        for(auto d:dir){
            int r=i+d[0];
            int c=j+d[1];
            if(r>=0 and c>=0 and r<grid.size() and c<grid[0].size() and grid[r][c]==1){
                size+=dfs(r,c,grid);
            }
        }
        
        return size+1;
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int ans=0,size=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    size=dfs(i,j,grid);
                    ans=max(size,ans);
                }
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends