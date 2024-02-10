class Solution {
public:
    int findNthDigit(int n) {
        long d  = 9;
        int f = 1, len = 1;

        while(n > d*len) {
            n = n - d*len;
            d = d * 10;
            f = f * 10;
            len++;
        }

        f = f + ((n - 1)/len);
        string s = to_string(f);
        int ans = s[(n-1)%len] - '0';
        return ans;
    }
};