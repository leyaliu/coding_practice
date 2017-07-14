class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        int pivot = 0;
        while(pivot < s.length())
        {
            int l = pivot;
            int r = pivot;
            while(r + 1 < s.length() && s[r + 1] == s[pivot])
            {
                ++r;
            }
            pivot = r;
            
            while(l - 1>= 0 && s[l - 1] == s[pivot])
            {
                --l;
            }
            
            while(l - 1 >= 0 && r + 1< s.length() && s[l-1] == s[r+1])
            {
                --l;
                ++r;
            }
            
            if (r - l + 1 > res.length())
            {
                res = s.substr(l, r - l + 1);
            }
            ++pivot;
        }
        
        return res;
    }
};
