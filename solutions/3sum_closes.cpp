class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len = nums.size();
        if (len < 3)
            return 0;
        
        sort(nums.begin(), nums.end());
        int result = nums[0] + nums[1] + nums[2];
        
        for(int i = 0; i < len - 2; i++){
            int j = i + 1;
            int k = len - 1;
            while(j < k)
            {
                int num = nums[i] + nums[j] + nums[k];
                result = abs(num - target) < abs(result - target) ? num : result;
  
                if (num < target)
                    j++;
                else 
                    k--;
            }
        }
        
        return result;
    }
};