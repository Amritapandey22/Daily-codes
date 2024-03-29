// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++)sum+=arr[i];
	    
	    vector<vector<bool>>dp(n+1,vector<bool>(sum+1,false));
	    for(int i=0;i<=n;i++)dp[i][0]=true;
	    for(int i=1;i<=sum;i++)dp[0][i]=false;
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	            if(j<arr[i-1])dp[i][j]=dp[i-1][j];
	            else{
	                dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
	            }
	            
	        }
	    }
	    int minDif=(int)1e9;
	    for(int s1=0;s1<=sum/2;s1++){
	        if(dp[n][s1]==true)
	        minDif=min(minDif,(sum-2*s1));
	    }
	    return minDif;
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends