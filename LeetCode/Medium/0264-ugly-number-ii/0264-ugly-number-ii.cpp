typedef long long ll;
class Solution {
public:

    int nthUglyNumber(int n) {
        if(n == 1) {
            return 1;
        }


        vector<ll> arr;
        arr.push_back(1);
        
        int i = 0, j = 0, k= 0;

        for(int t = 1; t <n; t++) {
            int nextNum = min(min(arr[i] * 2, arr[j] * 3), arr[k]* 5);
            arr.push_back(nextNum);

            if(nextNum == arr[i] * 2) {
                i++;
            }
            if (nextNum == arr[j] * 3) {
                j++;
            }
            if (nextNum == arr[k] * 5) {
                k++;
            }
        }

        return arr[n-1];
    }
};