class Solution {
public:

    bool power(double n) {
        if(n == 1 ) {
            return true;
        }
        if(n < 1) {
            return false;
        }
        
        return power(n/2);
        
    }
    bool isPowerOfTwo(int n) {
        
        return power(n);
    }
};