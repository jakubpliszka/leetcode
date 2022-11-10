class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int x = INT_MAX;
        int y = 0;
        
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < x)
                x = prices[i];
            
            y = prices[i] - x;
            if (result < y)
                result = y;
        }
        
        return result;
    }
};