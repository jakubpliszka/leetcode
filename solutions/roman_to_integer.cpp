class Solution {
public:
    int romanToInt(string s) {
        map<char, int> values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int sum = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i] == 'I' && s[i+1] == 'V')
            {
                sum += 4;
                i++;
            }
            else if (s[i] == 'I' && s[i+1] == 'X')
            {
                sum += 9;
                i++;
            }
            else if (s[i] == 'X' && s[i+1] == 'L')
            {
                sum += 40;
                i++;
            }
            else if (s[i] == 'X' && s[i+1] == 'C')
            {
                sum += 90;
                i++;
            }
            else if (s[i] == 'C' && s[i+1] == 'D')
            {
                sum += 400;
                i++;
            }
            else if (s[i] == 'C' && s[i+1] == 'M')
            {
                sum += 900;
                i++;
            }
            else
            {
                sum += values[s[i]];
            }
        }
        return sum;
    }
};


// Less complex but slower

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int sum = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (i + 1 < s.size() && values[s[i]] < values[s[i+1]])
            {
                sum -= values[s[i]];
            }
            else
            {
                sum += values[s[i]];
            }
        }
        return sum;
    }
};