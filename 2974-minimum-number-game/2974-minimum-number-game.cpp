class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        int n = nums.size();
        int mina = -1;
        int minb = -1;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<n-1; i+=2){
            swap(nums[i],nums[i+1]);
        }
        arr = nums;
        return arr;
    }
};