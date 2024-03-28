class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int maxi = INT_MIN ;
        int n = nums.size();
        int s = 0 , e = 0;

        while(e <n) {
            if(freq[nums[e]] < k) {
               freq[nums[e++]] ++;
            }
            else {
                maxi = max(maxi , e -s);
                freq[nums[s++]] --;

            }
        }
        maxi = max(maxi  , e - s);
        return maxi;
    }
};