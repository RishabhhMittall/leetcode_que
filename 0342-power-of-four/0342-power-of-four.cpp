class Solution {
public:

    bool powerCheck(float n){
        if(n==1) return true;

        else if(n<4) return false;

        return powerCheck(n/4);
    }

    bool isPowerOfFour(int n) {
        // if(n == 1 ) return true;
        // if(n == 0) return false;

        // if(n%4 != 0) return false;

        // while(n != 1){
        //     if(n%4 != 0){
        //         return false;
        //     }
        //     n = n/4;
        // }
        //  return true;
        // // else return false;

        return powerCheck(n);
    }
};