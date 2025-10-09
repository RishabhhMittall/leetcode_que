class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int, int>> st;

        int n = t.size();

        vector<int> ans(n);

        for(int i = n - 1; i >= 0; i--) {

            while(!st.empty() && st.top().first <= t[i]) {
                st.pop();
            }

            if(st.empty()) {
                ans[i] = 0;
            }
            else {
                ans[i] = st.top().second - i;
            }
            st.push({t[i], i});
        }
        return ans;
    }
};