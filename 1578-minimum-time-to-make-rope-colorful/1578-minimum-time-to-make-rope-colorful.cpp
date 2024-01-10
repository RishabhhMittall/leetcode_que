class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0;
        int i = 0, j = 0;
        int s = colors.length();
        while (i < s && j < s) {
            int total = 0, maxi = 0;
            while (colors[i] == colors[j] & j < s) {
                total += neededTime[j];
                maxi = max(maxi, neededTime[j]);
                j++;
            }
            ans += total - maxi;
            i = j;
        }       
        return ans;
    }
};     
