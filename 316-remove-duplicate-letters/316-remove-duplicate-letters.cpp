class Solution {
public:
    string removeDuplicateLetters(string s)
{
    vector<bool> included(26);
    vector<int> freq(26);
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }
    vector<char> stk;
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']--;
        if (included[s[i] - 'a'] == true)
        {
            continue;
        }
        while (stk.size() > 0 && stk[stk.size() - 1] > s[i] && freq[stk[stk.size() - 1] - 'a'] > 0)
        {
            included[stk[stk.size() - 1] - 'a'] = false;
            stk.pop_back();
        }
        included[s[i] - 'a'] = true;
        stk.push_back(s[i]);
    }
    string ans = "";
    for (auto ch : stk)
    {
        ans += ch;
    }
    return ans;
}

};