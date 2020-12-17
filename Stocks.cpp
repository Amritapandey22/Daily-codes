**Best Time to Buy and Sell Stock**
*Leetcode 121*

class Solution {
public:
    int  maxProfit(vector<int>& prices) {
        int i=0;
        int diff=0;
        int new_diff=0;
        while(i<prices.size()){
            for(int j=i+1;j<prices.size();j++){
                 new_diff=prices[j]-prices[i];
                if(new_diff>diff)
                    diff=new_diff;
                }
            i++;
        }
        return diff;
    }
};
