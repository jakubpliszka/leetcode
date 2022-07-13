class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        string temp;
        
        for (size_t i = 0; i < s.size(); i++)
        {
            size_t posOfDuplicate = temp.find(s[i]);
            if (posOfDuplicate == std::string::npos)
            {       
                temp += s[i];
            }
            else
            {
                longest = max(longest, static_cast<int>(temp.size()));
                temp.erase(temp.begin(), temp.begin() + posOfDuplicate + 1);
                i--;
            }
        }
    
        longest = max(longest, static_cast<int>(temp.size()));
        return longest;
    }
};