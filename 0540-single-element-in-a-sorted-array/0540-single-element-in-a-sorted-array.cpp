class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        // int s = 0, e = n-1;
        

        // while(s<e){
        //     int mid = s +(e-s)/2;
        //     // if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
        //     //     return nums[mid];
        //     // }
        //     if(mid % 2 != 0) mid --;
            
        //     if (nums[mid] != nums[mid+1]) e = mid;
        //     else if(nums[mid] == nums[mid+1]){ 
        //         s = mid+2;
        //     }
            
             
             
        // }

        if(n == 1) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        for(int i = 0; i<n-1; i++){
        
            if(nums[i] == nums[i+1]) i++;
            else return nums[i];
        }
        return -1 ;
    }
};