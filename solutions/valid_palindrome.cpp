class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        
        for (const auto& c : s)
        {
            if (iswalnum(c))
                result += tolower(c);
        }
        
        string resultReversed(result);
        reverse(resultReversed.begin(), resultReversed.end());
        if (result == resultReversed)
            return true;
        else
            return false;
    }
};