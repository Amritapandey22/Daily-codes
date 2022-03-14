class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //only two elements can contribute to majority elemenets in this case
        int val1=nums[0];
        int count1=1;
        
        int val2=nums[0];
        int count2=0;
        
        for(int i=1;i<nums.size();i++){
            if(val1==nums[i]){
                count1++;
            }else if(val2==nums[i]){
                count2++;
            }
           else{
             if(count1==0){
                val1=nums[i];
                count1=1;
            }else if(count2==0){
                val2=nums[i];
                count2=1;
            }else{
                count1--;
                count2--;
            }
           } 
        }
        
        count1=0;
        count2=0;
        vector<int>ans;
        
        for(int el:nums){
            if(el==val1){
                count1++;
            }
            else if(el==val2){
                count2++;
            }
        }
       // cout<<val1<<" "<<val2<<endl;
        
        if(count1>(nums.size())/3)ans.push_back(val1);
        if(count2>(nums.size())/3)ans.push_back(val2);
        
        return ans;
    }
};