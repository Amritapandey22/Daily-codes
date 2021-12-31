class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
      int count=1,ans=0;
        for(auto ch:sen){
            for(auto w:ch){
                if(w==' ')count++;
            }
            ans=max(ans,count);
            count=1;
        }
        
        return ans;
    }
};