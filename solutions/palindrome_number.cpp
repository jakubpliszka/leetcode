class Solution {
public:
    bool isPalindrome(int x) {
        string x_s = to_string(x);
        string x_s_r(x_s);
        reverse(x_s_r.begin(), x_s_r.end());
        if (x_s == x_s_r)
            return true;
        else
            return false;
        
    }
};