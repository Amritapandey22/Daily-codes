class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp1,mp2;
        
        for(auto ch:words1)mp1[ch]++;
        for(auto ch:words2)mp2[ch]++;
        int count=0;
        for(auto el:words1){
            if(mp1[el]==1 and mp2[el]==1)count++;
        }
        
        return count;
    }
};

/*class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int> m1,m2;
        int count=0;
        for(string word:words1)
            m1[word]++;
        for(string word:words2)
            m2[word]++;
        for(string word:words2)
        {
            if(m1[word]==1 && m2[word]==1)
                count++;
        }
        return count;
    }
};*/