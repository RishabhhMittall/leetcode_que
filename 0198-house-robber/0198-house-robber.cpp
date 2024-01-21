#include <vector>
#include <algorithm>

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return nums[0];
        }

        // Initialize two variables to keep track of the maximum money robbed
        int prevMax = 0; // maximum money robbed up to the previous house
        int currMax = 0; // maximum money robbed up to the current house

        for (int i = 0; i < n; ++i) {
            // Calculate the new maximum money robbed up to the current house
            int temp = currMax;
            currMax = max(currMax, prevMax + nums[i]);
            prevMax = temp;
        }

        // The final result is stored in currMax
        return currMax;
    }
};
