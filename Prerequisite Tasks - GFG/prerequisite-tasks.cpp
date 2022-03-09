// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
bool dfs(int src,vector<int>&vis,vector<vector<int>>& graph){
    vis[src]=1;
    bool cycle=false;
    for(auto el:graph[src]){
        if(vis[el]==0){
             cycle=cycle|| dfs(el,vis,graph);
        }else if(vis[el]==1)return true;
    }
    
    vis[src]=2;
    return cycle;
}
	bool isPossible(int N, vector<pair<int, int> >& grap) {
	    // Code here
	    //detect cycle in directed graph
	    vector<vector<int>>graph(N);
	    for(auto e:grap){
	        int u=e.first;
	        int v=e.second;
	        graph[u].push_back(v);
	    }
	    bool isCycle=false;
	    vector<int>vis(N,0);
	    //0-unvisited,2-visited,1-currentpath
	    for(int i=0;i<N;i++){
	        if(!vis[i]){
	             isCycle=isCycle || dfs(i,vis,graph);
	        }
	    }
	    
	    return !isCycle;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends