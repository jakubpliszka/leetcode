class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 1 && nums[0] == target)
            return 0;
        
        for (int i = 0; i <= n / 2; i++)
        {
            int j = n - 1 - i;
            if (nums[i] == target)
                return i;
            else if (nums[j] == target)
                return j;
        }
        
        return -1;
    }
};