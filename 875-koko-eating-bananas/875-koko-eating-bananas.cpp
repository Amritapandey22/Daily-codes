class Solution {
public:
    bool canEatBanana(vector<int>& piles,int h,int k){
        int hours=0;
        for(int el:piles){
            int time=ceil(1.0*el/k);            
            hours+=time;
        }
        
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high,mid;
        for(int el:piles)high=max(high,el);
        
        while(low<=high){
            mid=low+(high-low)/2;
           if(canEatBanana(piles,h,mid))high=mid-1;
           else low=mid+1;
        }
        
        return low;
    }
};