class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1)
        {
            return s;
        }
        vector<string> rows(numRows, "");
        int step = 1;
        int cur = 0;
        for(int i = 0; i < s.length(); ++i)
        {
            rows[cur].push_back(s[i]);
            if (cur == numRows-1)
            {
                step = -1;
            }
            else if (cur == 0)
            {
                step = 1;
            }
            
            cur += step;
        }
        
        string res;
        for(string& s: rows)
        {
            res += s;
        }
        
        return res;
    }
};
