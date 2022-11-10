class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = strs[0];
        for (size_t i = 0; i < strs.size() - 1; i++)
        {
            size_t len = strs[i].length() < strs[i+1].length() ? strs[i].length() : strs[i+1].length();
            string tmp;
            for (size_t j = 0; j < len; j++)
            {
                if (strs[i][j] == strs[i+1][j])
                    tmp += strs[i][j];
                else
                    break;
            }
            
            result = tmp.length() < result.length() ? tmp : result;
        }
        return result;
    }
};