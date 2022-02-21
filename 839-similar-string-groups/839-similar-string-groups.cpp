class Solution {
public:
    vector<int>par,size;
    int findPar(int u)
    {
        return par[u]==u?u:findPar(par[u]);
    }
    bool isSim(string s1,string s2){
        int check=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i] and (++check > 2)) return false;
        }
        
        return true;
    }
    int numSimilarGroups(vector<string>& strs) {
       
        int n=strs.size();
        int ans=n;
        for(int i=0;i<n;i++)par.push_back(i);
        //for(int i=0;i<;i++)size.push_back(1);
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isSim(strs[i],strs[j])){
                    int p1=findPar(i);
                    int p2=findPar(j);
                    if(p1 != p2){
                       par[p1]=p2;
                        ans--;
                    }
                }
            }
        }
        
        return ans;
    }
};