class Solution {
public:
    bool isPalindrome(int x) {
        long long int y=0;
        int n=x;
        if(x<0 || (x%10==0 && x!=0))
            return false;
        while(x>0){
            y=y*10 + x%10;
            x=x/10;
            
        }
        if(n==y)
                return true; 
        return false;
    }
};