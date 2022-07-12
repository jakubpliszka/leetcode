class Solution {
public:
    int reverse(int x) {
        long max = pow(2, 31);
        if (x > max || x <= -max)
            return 0;
        
        bool isNegative = false;
        if (x < 0)
        {
            x *= -1;
            isNegative = true;
        }
        
        string x_s = to_string(x);
        string reversed;
        for (int i = x_s.size() - 1; i >= 0; i--)
        {
            reversed += x_s[i];
        }

        long result_long = stol(reversed);
        if (result_long > max)
            return 0;
        
        int result = static_cast<int>(result_long);
        if (isNegative)
            result *= -1;
        
        return result;
    }
};