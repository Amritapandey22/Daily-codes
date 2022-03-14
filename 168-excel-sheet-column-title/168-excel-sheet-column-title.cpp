class Solution {
public:
    string convertToTitle(int colNum) {
        vector<string>textTitle={"A","B","C","D","E","F","G","H","I","J","K","L"
                          "M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
        string ans="";
        int c=701;
        while(colNum){
            colNum--;
            int idx=colNum%26;
            
            //cout<<c%26;
            ans+=(char)(idx+'A');
            colNum=colNum/26;
            
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};