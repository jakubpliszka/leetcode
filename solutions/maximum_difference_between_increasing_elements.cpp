class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int result = 0;
        int smallestNum = nums[0];
        
        for (size_t i = 1; i < nums.size(); i++)
        {
            result = max(result, nums[i] - smallestNum);
            smallestNum = min(smallestNum, nums[i]);
        }
        
        return result > 0 ? result : -1;
    }
};

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int result = -1;
        
        for (size_t i = 0; i < nums.size() - 1; i++)
        {
            for (size_t j = i + 1; j < nums.size(); j++)
            {
                int difference = nums[j] - nums[i]; 
                if (difference > result && difference > 0)
                    result = difference;
            }
        }
        
        int difference = nums[nums.size() - 1] - nums[0]; 
        if (difference > result && difference > 0)
            result = difference;
        
        return result;
    }
};