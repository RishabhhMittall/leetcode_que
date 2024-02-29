class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        
        // int s = -1;
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] == 0){
        //         s = i;
        //         break;
        //     }
        // }
        // if(s == -1){
        //     return;
        // }
        // for(int i = s+1; i<nums.size(); i++) {

        //     if(nums[i] != 0) {
        //         swap(nums[i],nums[s]);
        //         s++;
        //     }
        // }

        int i = 0;
        for(int j =0; j<nums.size();j++) {
            if(nums[j] != 0){
                swap(nums[j], nums[i]);
                i++;
            }
        } 
    }
};