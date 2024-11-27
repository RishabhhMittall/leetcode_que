class Solution {
public:
    int maxSum(vector<int>& nums) {
        int ans = -1;
        int maxDigitArray[10] = {0};

        for(int i = 0; i< nums.size(); i++) {
            int maxD = 0;
            int temp = nums[i];

            while(temp != 0) {
                maxD = max(maxD, temp%10);
                temp /= 10;
            }

            if(maxDigitArray[maxD]){
                ans = max(ans , maxDigitArray[maxD] + nums[i]);
                maxDigitArray[maxD] = max(maxDigitArray[maxD], nums[i]);
            }
            if(maxDigitArray[maxD] == 0) {
                maxDigitArray[maxD] = nums[i];
            }
        }
        return ans;
    }
};