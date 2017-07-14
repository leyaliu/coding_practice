class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int begin = 0;
        unordered_set<char> lookup;
        for(int i = 0; i < s.length(); ++i)
        {
            char& cur = s[i];
            auto iter = lookup.find(cur);
            if (iter != lookup.end())
            {
                while(begin < i && s[begin] != cur)
                {
                    lookup.erase(s[begin]);
                    ++begin;
                }
                lookup.erase(s[begin]);
                ++begin;
            }
            lookup.insert(cur);
            res = max(res, i-begin+1);
        }
        
        return res;
    }
};
