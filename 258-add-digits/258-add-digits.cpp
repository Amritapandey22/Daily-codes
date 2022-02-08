// class Solution {
// public:
//     int checkDig(int num){
//         return floor(log10(num) + 1);
//     }
    
//     int calcSum(int num){
//         int sum=0;
//         while(num){
//             sum+=num%10;
//             num/=10;
//         }
        
//         return sum;
//     }
//     int addDigits(int num) {
//         bool check=true;
//         int ans=0;
//         while(1){
//          ans=calcSum(num);
//             if(checkDig(ans)==1){
//                 //check=false;
//                 return ans;
//             }else{
//                 ans=calcSum(ans);
//             }
//         }
        
//         return -1;
//     }
// };

class Solution {
public:
    int addDigits(int num) {
      int sum=0;
        while(num>9)
        {
            while(num)
            {
                sum+=(num%10);
                num/=10;
            }
            num=sum;
            sum=0;
        }
        return num;
    }
};