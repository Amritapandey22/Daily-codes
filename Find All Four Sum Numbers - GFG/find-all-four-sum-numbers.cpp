// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        set<vector<int>>st;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                int l=j+1;
                int r=n-1;
                while(l<r){
                    if(arr[i]+arr[j]+arr[l]+arr[r]==k)
                      st.insert({arr[i],arr[j],arr[l++],arr[r--]});
                    else if(arr[i]+arr[j]+arr[l]+arr[r]<k)
                       l++;
                    else 
                       r--;
                }
                
            }
        }
        
        vector<vector<int>>ans;
        for(auto it:st)ans.push_back(it);
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends