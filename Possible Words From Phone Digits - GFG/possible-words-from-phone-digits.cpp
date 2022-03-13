// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    vector<string>ans;
    //Function to find list of all words possible by pressing given numbers.
    void getKeyPadStr(int idx,int n,vector<string>&keyPadstr,string asf,int a[]){
        if(idx==n){
            
            ans.push_back(asf);
            return;
        }
        
        for(auto ch:keyPadstr[a[idx]]){
            
            //cout<<idx;
            getKeyPadStr(idx+1,n,keyPadstr,asf+ch,a);
        }
        
       
    }
    vector<string> possibleWords(int a[], int n)
    {
        //Your code here
        vector<string>keyPadstr={"","","abc","def","ghi",
        "jkl","mno","pqrs","tuv","wxyz"};
        int i=0;
        string strAns="";
        getKeyPadStr(i,n,keyPadstr,strAns,a);
        
        return ans;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends