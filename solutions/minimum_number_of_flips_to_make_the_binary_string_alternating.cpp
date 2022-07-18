class Solution {
public:
    int minFlips(string s) {
        int result = INT_MAX;
        int n = s.size();
        s += s;
        string sTemp1, sTemp2;
        
        for (size_t i = 0; i < s.size(); i++) 
        {
            sTemp1 += i % 2 ? '0' : '1';
            sTemp2 += i % 2 ? '1' : '0';
        }
        
        int resultTemp1 = 0;
        int resultTemp2 = 0;
        for (size_t i = 0; i < s.size(); i++) 
        {
            if (sTemp1[i] != s[i]) 
                ++resultTemp1;
            
            if (sTemp2[i] != s[i]) 
                ++resultTemp2;
            
            if (i >= n) 
            { 
                if (sTemp1[i - n] != s[i - n]) 
                    --resultTemp1;
                if (sTemp2[i - n] != s[i - n]) 
                    --resultTemp2;
            }
            
            if (i >= n - 1)
                result = min({result, resultTemp1, resultTemp2});
        }
        
        return result;     
    }
};