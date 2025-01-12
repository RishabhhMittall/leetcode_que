class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> lres (n, 1);
        vector<int> rres(n, 1);

        int lans = 1, rans = 1;

        for(int i = 1; i<n; i++) {
            lans *= nums[i-1];
            lres[i] = lans;
        }

        for(int i = n-2; i>=0; i--) {
            rans *= nums[i+1];
            rres[i] = rans;
        }

        vector<int> res(n,1);

        for(int i = 0; i<n; i++) {
            res[i] = lres[i] * rres[i];
        }

        return res;
    }
};