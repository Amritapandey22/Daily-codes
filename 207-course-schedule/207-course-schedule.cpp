class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prq) {
        vector<vector<int>>graph(n);
        vector<int>indeg(n);
        vector<int>ans;
        for(auto e:prq){
            graph[e[0]].push_back(e[1]);
            indeg[e[1]]++;
        }
        queue<int>q;
        
        for(int i=0;i<indeg.size();i++)if(indeg[i]==0)q.push(i);
        
        while(q.size()){
            int vtx=q.front();
            ans.push_back(vtx);
            q.pop();
            for(int el:graph[vtx]){
                if(--indeg[el]==0)q.push(el);
            }
        }
        
        return n==ans.size();
    }
};