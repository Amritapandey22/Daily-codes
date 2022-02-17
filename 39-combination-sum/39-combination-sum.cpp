class Solution {
public:
    void getAnswers(vector<vector<int>>&res,vector<int>& cand,int trg,vector<int>ans,int idx){
        if(trg==0){
            res.push_back(ans);
            return;
        }
        if(trg<0)return;
        
        for(int i=idx;i<cand.size();i++){
               if(trg-cand[i]>=0){
                ans.push_back(cand[i]);
                getAnswers(res,cand,trg-cand[i],ans,i); 
                ans.pop_back();
                 
               
            }
             
            
        }
         
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& cand, int trg) {
        
        vector<vector<int>>res;
        vector<int>ans;
        getAnswers(res,cand,trg,ans,0);
        return res;
    }
};