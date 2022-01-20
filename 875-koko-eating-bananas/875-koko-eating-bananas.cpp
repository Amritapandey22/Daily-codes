class Solution {
public:
    bool isPos(int mid,vector<int>& piles, int h){
        int totH=0;
        for(int e:piles){
            int time=e/mid;
            if(e%mid!=0)time++;
            totH+=time;
            if(totH>h)return false;
        }
        
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int si=1,ei=(int)1e9;
        while(si<ei){
            int mid=si+(ei-si)/2;
            
            if(!isPos(mid,piles,h)) si=mid+1;
            else ei=mid;
            
        }
        
        return si;
    }
};