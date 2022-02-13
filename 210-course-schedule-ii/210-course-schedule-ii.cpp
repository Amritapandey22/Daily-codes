class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prq) {
       vector<vector<int>>graph(n);
        vector<int>indeg(n);
        for(vector<int>e:prq){
            graph[e[0]].push_back(e[1]);
            indeg[e[1]]++;
        }
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<indeg.size();i++)if(indeg[i]==0)q.push(i);
        
        while(q.size()){
            int vtx=q.front();
            q.pop();
            ans.push_back(vtx);
            
            for(int el:graph[vtx]){
                if(--indeg[el]==0)q.push(el);
            }
        }
        
        reverse(ans.begin(),ans.end());
        
        return n==ans.size()? ans :vector<int>();
    }
};