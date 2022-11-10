class Solution {
public:
    bool isValid(string s) {
        stack<char> result;
        
        for (const auto& c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                result.push(c);
            }
            else
            {
                if (result.empty() || (result.top() == '(' && c != ')') || (result.top() == '{' && c != '}') ||
                (result.top() == '[' && c != ']'))
                    return false;
                result.pop();
            }
        }
        
        return result.empty();
    }
};