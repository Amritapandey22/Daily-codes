class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>mp;
        for(string s:strs){
            string str=s;
            sort(str.begin(),str.end());
            //if(mp.find(str)!=mp.end()){
                mp[str].push_back(s);
            //}
        }
        
        vector<vector<string>>ans;
        
        for(auto st:mp){
            string f=st.first;
            vector<string>sans;
            for(string s:mp[f])sans.push_back(s);
            ans.push_back(sans);
            
        }
        
        return ans;
    }
};