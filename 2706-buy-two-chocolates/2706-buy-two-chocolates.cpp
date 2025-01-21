class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        sort(prices.begin(),prices.end());
        int s = 0;
        int e = n-1;
        int sum = 0;
        while(s < e) {
            if(prices[s] + prices[s+1] <= money) {
                sum = prices[s] + prices[s+1];
                s++;
            }
            return money - sum;
        }
        return money;
    }
};