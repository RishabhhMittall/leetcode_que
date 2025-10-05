class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int n = piles.size();
        if(h == n) {
            return maxi;
        }

        int mini = 1;
        int ans = INT_MAX;

        while(mini <= maxi) {
            int midSpeed = mini + (maxi - mini)/2;

            int curr = 0;

            for(auto x : piles) {
                curr += ceil((double)x/midSpeed);
            }

            if(curr <= h) {
                ans = min(ans, midSpeed);
                maxi = midSpeed - 1;
            }
            else {
                mini = midSpeed + 1;
            }
        }

        return ans;
    }
};