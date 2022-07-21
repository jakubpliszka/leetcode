class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (auto& el : operations)
        {
            if (el.find("+") != string::npos)
                x++;
            else
                x--;
        }
        
        return x;
    }
};

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (auto& el : operations)
            x += el[1] == '+' ? 1 : -1;
        
        return x;
    }
};