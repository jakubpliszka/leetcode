class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int result = 0;
        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size() / 2; i++)
        {
            result = max(result, nums[i] + nums[nums.size() - 1 - i]);
        }
        
        return result;
    }
};