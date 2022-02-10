class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
       int n=arr.size(),i=1;
        //if(n==3)return arr[0]<arr[1] and arr[1]>arr[2];
        while(i<n){
            if(arr[i]>arr[i-1])i++;
            else break;
        }
        
        if(i==1 or i==n)return false;
        //i is the end of increasing mountain
        while(i+1<n){
            if(arr[i]>arr[i+1])i++;
            else break;
        }
        
        if(i!=n-1)return false;
        if(arr[n-1]<arr[n-2]) return true;
        return false;
    }
};