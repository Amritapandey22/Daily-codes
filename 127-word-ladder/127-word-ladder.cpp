class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        unordered_set<string>st;
        for(string str:wordList)st.insert(str);
        
        if(st.find(endWord)==st.end()) return 0;
        
        queue<string>q;
        q.push(beginWord);
        int level=1;
        while(q.size()){
            int qsize=q.size();
            while(qsize--){
                string word=q.front();
                q.pop();
                st.erase(word);
                //cout<<level<<endl;
                if(word==endWord)return level;
                for(int j=0;j<word.size();j++){
                    char ch=word[j];
                    for(int i=0;i<26;i++){
                        word[j]='a'+i;
                        //cout<<
                        if(st.find(word)!=st.end())q.push(word);
                    }
                    word[j]=ch;
                }
            }
            
            level++;
        }
        
        return 0;
    }
};