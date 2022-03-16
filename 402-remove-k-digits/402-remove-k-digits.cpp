class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        if(k==num.size())return "0";
        
        for(int i=0;i<num.size();i++){
            while(k>0 and st.size()!=0 and num[i]<st.top()){
                --k;
                st.pop();
            }
        st.push(num[i]);    
        }
        
        while(k!=0 and st.size()!=0){
            --k;
            st.pop();
        }
         num="";
        while(st.size()!=0){
            num+=st.top();
            st.pop();
        }
        int i=0;
        reverse(num.begin(),num.end());
        //preceding zeroes
        while(num[i]=='0')i++;
        
        string ans=num.substr(i);
        return ans=="" ? "0":ans;
    }
};