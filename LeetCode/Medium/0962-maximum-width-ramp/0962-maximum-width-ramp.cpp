class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<pair<int, int>> st; // nums -> i
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (st.empty() || st.top().first > nums[i]) {
                st.push({nums[i], i});
            }
        }

        int ans = 0;
        for (int j = n - 1; j >= 0; j--) {
            if (!st.empty() && j <= st.top().second) {
                break;
            }
            while(!st.empty() && nums[j] >= st.top().first) {
                ans = max(ans, j - st.top().second);
                st.pop();
            }
        }
        return ans;
    }
};