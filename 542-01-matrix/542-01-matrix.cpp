class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int level=0;
        queue<int>q;
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push(i*m+j);
                    vis[i][j]=true;
                }
        }
    }
        vector<vector<int>>dir{{-1,0},{1,0},{0,-1},{0,1}};
        while(q.size()){
            int qsize=q.size();
            while(qsize--){
                int idx=q.front();
                q.pop();
                
                int sr=idx/m,sc=idx%m;
               
                for(auto d:dir){
                    int r=sr+d[0],c=sc+d[1];
                    if(r>=0 and c>=0 and r<n and c<m and !vis[r][c]){
                        mat[r][c]=level+1;
                        q.push(r*m+c);
                        vis[r][c]=true;
                    }
                }
            }
            level++;    
        }
            
        return mat;
    
    }
};