/*
# Complexity
- Time complexity:
O(NlogN)

- Space complexity:
O(1)

# Code*/
cpp []
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long left = 0, right = 0, total = 0, maxFreq = 0;
        while (right < nums.size()) {
            total += nums[right];
            while ((right - left + 1) * nums[right] - total > k) {
                total -= nums[left]; 
                left++;
            }
            maxFreq = max(maxFreq, right - left + 1);
            right++;
        }
        return maxFreq;
    }
};
