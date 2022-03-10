// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > mat, int r, int c) 
    {
        // code here 
        int minr=0;
        int maxr=r-1;
        int minc=0;
        int maxc=c-1;
        int count=r*c+1;
        vector<int>ans;
        
        while(minr<=maxr and minc<=maxc and count!=0){
            //right
            for(int i=minc;i<=maxc and (--count !=0);i++){
                ans.push_back(mat[minr][i]);
                
            }
            minr++;
            //down
             for(int i=minr;i<=maxr and (--count !=0);i++){
                
                ans.push_back(mat[i][maxc]);
               
            }
             maxc--;
             
             //left
              for(int i=maxc;i>=minc and (--count !=0);i--){
                ans.push_back(mat[maxr][i]);
                
            }
            maxr--;
            //up
             for(int i=maxr;i>=minr and (--count !=0);i--){
                ans.push_back(mat[i][minc]);
                
            }
            minc++;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends