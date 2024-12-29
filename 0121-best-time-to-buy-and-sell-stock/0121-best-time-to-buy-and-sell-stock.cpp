class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int pro = 0;
        int temp = prices[0];

        for(int i = 1; i<n; i++) {
            if(temp > prices[i]) {
                temp = prices[i];
            }
            else if(pro < abs(temp - prices[i])) {
                pro = prices[i] - temp;
            }
        }
        return pro;
    }
};