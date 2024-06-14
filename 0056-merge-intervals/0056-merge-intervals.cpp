class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int rows = intervals.size();
        vector<vector<int>> res;
                          
        if (intervals.empty()) {
            return res;
        }

        sort(intervals.begin(), intervals.end());
        
        int ptr1 = intervals[0][0];
        int ptr2 = intervals[0][1];
                          
        for(int i = 1 ; i < rows ; i++){
            int currentStart = intervals[i][0];
            int currentEnd = intervals[i][1];

            if (currentStart <= ptr2) {
                // Merge intervals
                ptr2 = max(ptr2, currentEnd);
            } else {
                // Add the merged interval to the result and update ptrs
                res.push_back({ptr1, ptr2});
                ptr1 = currentStart;
                ptr2 = currentEnd;
            }
        }
        
        res.push_back({ptr1,ptr2});
        
        return res;
    }
};
