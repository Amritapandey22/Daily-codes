// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    struct comp
{
    bool operator()(pair<int,int>&a, pair<int,int>&b)
    {
        return a.second > b.second;
    }
};
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq;
        vector<bool>vis(V);
        vector<int>cost(V,0);
        pq.push({S,0});  //source vertex and cost
        //cost[S]=0;
        while(!pq.empty()){
            auto currPair = pq.top();
            pq.pop();
            
            if(vis[currPair.first])
                continue;
            vis[currPair.first]=true;
            cost[currPair.first]=currPair.second;
            
            vector<vector<int>>neighbours=adj[currPair.first];
            for(vector<int>nbr:neighbours)
            {
                int currNbr = nbr[0];
                int currWeight = nbr[1];
                
                if(vis[currNbr])
                    continue;
                //if(cost[nbr[0]] > currPair.second+currWeight)
                pq.push({currNbr,currPair.second+currWeight});
            }
            
        }
        return cost;
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends