class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;

        // for(int i = 0; i<n-1; i++) {
        //     for(int j  = i+1; j<n; j++) {
        //         int diff = prices[j] - prices[i];
        //         profit = max(profit,diff);
        //     }
        // }
        // return profit;

        int maxPro = 0;
        int minPri = prices[0];

        for(int i = 1; i<n; i++) {
            minPri = min(minPri,prices[i]);
            profit = abs(prices[i] - minPri);
            maxPro = max(maxPro, profit);
        }
        return maxPro;
            
        
    }
};