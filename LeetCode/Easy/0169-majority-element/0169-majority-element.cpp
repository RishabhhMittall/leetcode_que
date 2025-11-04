class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int curr = 0;
        int cnt = 0;

        for(int i = 0; i<n; i++) {
            if(cnt == 0) {
                curr = nums[i];
                cnt++;
            }
            else if(nums[i] == curr) {
                cnt++;
            }
            else {
                cnt--;
            }
        }
        return curr;
    }
};