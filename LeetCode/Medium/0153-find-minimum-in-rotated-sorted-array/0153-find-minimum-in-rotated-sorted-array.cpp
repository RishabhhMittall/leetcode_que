class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n = nums.size();

        // for(int i = 0; i<n-1; i++) {
        //     if(nums[i] > nums[i+1]) {
        //         return  nums[i+1];
        //     }
        // }

        // return nums[0];

        int low = 0, high = n - 1;

        while(low <= high) {
            int mid = low + (high - low)/2;

           
            if (nums[mid] < nums[high]) {
                // in left
                high = mid;
            } 
            else if (nums[mid] > nums[high]) {
                // in right
                low = mid + 1;
            } 
            else {
                high--;
            }
        }

        return nums[low];
    }
};