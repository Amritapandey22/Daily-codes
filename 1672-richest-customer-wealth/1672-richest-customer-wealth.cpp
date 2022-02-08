class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int maxsum=0;
        int sum=0;
        for(int i=0;i<acc.size();i++){
            sum=0;
            for(int j=0;j<acc[i].size();j++){
                sum+=acc[i][j];
            }
            maxsum=max(sum,maxsum);
        }
        
        return maxsum;
    }
};