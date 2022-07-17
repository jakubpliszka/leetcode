class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.length() == 0)
            return true;
        
        size_t pos = 0;
        for (auto& l : t)
        {
            if (s[pos] == l)
            {
                if (pos == s.length() - 1)
                    return true;
                
                pos++;
            }
        }
        
        return false;
    }
};