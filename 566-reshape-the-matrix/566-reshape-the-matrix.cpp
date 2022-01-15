class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size(),m=mat[0].size(),tot=m*n;
        if(tot!=r*c)return mat;
        vector<vector<int>>res(r,vector<int>(c,0));
        for(int i=0;i<tot;i++){
            res[i/c][i%c]=mat[i/m][i%m];
        }
        
        return res;
    }
};