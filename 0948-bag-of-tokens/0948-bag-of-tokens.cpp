class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int n = tokens.size(); 
        int ans = 0;
        int s = 0, e = n -1;
        int res = 0;
        while (s <= e) {
            if(tokens[s] <= power) {
                power = power - tokens[s];
                ans++;
                res = max(res, ans);
                s++;
            }
            else if(ans > 0) {
                power = power + tokens[e];
                ans -- ;
                e--;
            }
            else {
                break;
            }
        }
        return res;
    }
};