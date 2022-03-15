class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        unordered_set<int>stemp;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')st.push(i);
            else if(s[i]==')'){
                //cout<<st.top()<<" ";
                if(st.size()==0)stemp.insert(i);
                else st.pop();
                //else st.pop();
            }
        }
        
        while(st.size()!=0){
           // cout<<st.top()<<" ";
          stemp.insert(st.top());
          st.pop();  
        }
        string res="";
      //  for(int el:stemp)cout<<el<<" ";
        for(int i=0;i<s.size();i++){
            if(stemp.find(i)==stemp.end())
                res+=s[i];
        }
        
        return res;
    }
};