#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> ans;

        for (int i = 0; i < n; ++i) {
            if (i > k) {
                ans.erase(nums[i - k - 1]);
            }
            if (!ans.insert(nums[i]).second) {
                return true;
            }
        }

        return false;
    }
};
