class Solution {
public:

    int func(long n,int cnt) {
        
        if(n == 1) {
            return  cnt;
        }
        if(n%2 == 0) {
            n = n/2;
            cnt ++;
            return func(n,cnt);
        }
        else{
            int dec = func(n-1,cnt+1);
            int inc = func(n+1,cnt+1);
            return min(dec,inc);
        }
        return 0;
    }

    int integerReplacement(int n) {
        int count = 0;
        int ans = func(n,count);
        return ans;
    }
};