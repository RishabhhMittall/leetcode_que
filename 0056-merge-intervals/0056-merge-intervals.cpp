class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {

        int n = i.size();
        sort(i.begin(), i.end());
        
        vector<vector<int>> ans;
        ans.push_back(i[0]);

        int j;
        for(j = 1; j<n; j++) {
            vector<int> temp = ans.back();
            ans.pop_back();

            if(temp[1] > i[j][1]) {
                ans.push_back(temp);
            }
            else if(temp[1] >= i[j][0]) {
                temp[1] = i[j][1];
                ans.push_back(temp);
            }
            else {
                ans.push_back(temp);
                ans.push_back(i[j]);
            }

        }

        return ans;
    }
};