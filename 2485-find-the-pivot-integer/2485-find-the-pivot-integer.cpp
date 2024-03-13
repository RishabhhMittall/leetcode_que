class Solution {
public:
    int pivotInteger(int n) {
        int s = 1, e = n;
        int mid = (s+e)/2;

        while(s<=e){
            
            int s1 = mid*(mid+1)/2;
            int s2 = (n*(n+1)/2)-s1+mid;
            if(s1 == s2) {
                return mid;

            }
            if(s1<s2){ 
                s = mid+1;

            }
            else {
                e = mid-1;
                
            }
            mid = (s+e)/2;
        }
        return -1;
    }
};