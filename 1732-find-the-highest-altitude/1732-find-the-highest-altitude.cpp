class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int n = gain.size();
        int maxi = 0, curr = 0;
        int i = 0;

        while (i < n) {
            curr = gain[i] + curr;
            maxi = max(maxi, curr);
            i++;
        }

        return maxi;
    }
};