class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int result = 0;
        int n = colors.size();
        for (int i = 0; i < n; i++) 
        {
            if (colors[i] != colors[0])
                result = max(result, i);
            if (colors[i] != colors[n - 1])
                result = max(result, n - 1 - i);
        }
        
        return result;
    }
};