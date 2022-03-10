// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
string genBin(int n){
    if(n==1)return "1";
    string ans="";
    while(n){
       int rem=n%2;
       ans+=to_string(rem);
       n=n/2;
    }
    reverse(ans.begin(), ans.end());
    
    return ans;
}
vector<string> generate(int n)
{
	// Your code here
	
	vector<string>ans;
	for(int i=1;i<=n;i++){
	   string str=genBin(i);
	   ans.push_back(str);
	}
	
	return ans;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends