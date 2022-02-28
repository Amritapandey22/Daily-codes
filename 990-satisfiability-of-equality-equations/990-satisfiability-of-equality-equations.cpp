class Solution {
public:
    vector<int>par;
    
    int findPar(int u){
        return par[u]==u?u:(findPar(par[u]));
    }
    
    bool equationsPossible(vector<string>& equations) {
        
        for(int i=0;i<26;i++){
            par.push_back(i);
        }
        
        for(string &str:equations){
            if(str[1]=='='){
                int p1=findPar(str[0]-'a');
                int p2=findPar(str[3]-'a');
                if(p1!=p2)par[p1]=p2;
            }
        }
        
         for(string &str:equations){
            if(str[1]=='!'){
                int p1=findPar(str[0]-'a');
                int p2=findPar(str[3]-'a');
                if(p1==p2)return false;
            }
        }
        
        return true;
    }
};