class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        ans.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); ++i) {
            vector<int>& last = ans.back();                   //ans.back() returns last element in the interval
            if (intervals[i][0] <= last[1]) {
                last[1] = max(last[1], intervals[i][1]);
                //  ans.back() = last;                     // for passing without refrence 
            } else {
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};