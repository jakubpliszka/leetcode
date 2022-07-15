class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int result = INT_MAX;
        
        // Remove not uniques
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        
        for(size_t i = 0; i < nums.size(); i++)
        {
            int lastNum = nums[i] + len - 1;
            
            auto it = upper_bound(nums.begin(), nums.end(), lastNum); // Element greater than lastNum
            int n = it - nums.begin() - i;
            result = min(result, len - n);
        }
        
        return result;
    }
};