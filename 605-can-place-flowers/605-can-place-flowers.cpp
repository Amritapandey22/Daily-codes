class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)return true;
        if(flowerbed.size()==1)return flowerbed[0]==0;
        for(int i=0;i<flowerbed.size();i++){
            if(i==0 and flowerbed[i]==0){
                if(i+1<flowerbed.size() and flowerbed[i+1]==0){
                   n-=1;
                    flowerbed[i]=1;
                }
            }
             else if(i==flowerbed.size()-1 and flowerbed[i]==0){
                if(i-1>=0 and flowerbed[i-1]==0){
                   n-=1;
                  flowerbed[i]=1;
                }
            }
            else{
                if(flowerbed[i]==0) {
                    flowerbed[i]=flowerbed[i-1]==0 and flowerbed[i+1]==0;
                    n-=flowerbed[i];
                }
            }
            
            if(n==0)return true;
        }
        
        return false;
    }
};