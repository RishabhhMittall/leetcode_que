class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 1;

        if(n == 0 || n == 1) return n;

        int ans = 0;

        for(int i = 0; i<n-1; i++) {
            ans = a + b;
            a = b;
            b = ans;
        }
        return ans;
    }
};