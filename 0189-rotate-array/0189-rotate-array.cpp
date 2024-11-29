#include<algorithm>
class Solution {
public:

    // void reverseArray(vector<int> &nums, int s, int e) {
    //     while(s < e) {
    //         swap(nums[s],nums[e]);
    //         s++;
    //         e--;
    //     }
    // }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1){
            return;
        }
        k = k%n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};