class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        // for (int i = 0; i < n - 1; i++) {
        //     if (nums[i] == nums[i + 1]) {
        //         ans.push_back(nums[i]);
        //     }
        // }
        
        // for (int i = 1; i <= n; i++) {
        //     if (find(nums.begin(), nums.end(), i) == nums.end()) {
        //         ans.push_back(i); 
        //         break;
        //     }
        // }

        // return ans;



        // if(nums[0] != 1){
        //     for(int i = 1; i<n; i++){
        //         if(nums[i-1] == nums[i]){
        //             ans.push_back(nums[i]);
        //             ans.push_back(1);
        //             return ans;
        //         }
        //     }
        // }
        // for(int i = 0; i<n; i++){
        //     if(nums[i] != i + 1){
        //         ans.push_back(nums[i]);
        //         for(int i = 1; i<=n ; i++){
        //             if(nums[i] != i + 1){
        //                 ans.push_back(nums[i]);
        //                 return ans;
        //             }
        //         }
        //     }
        // }
        // return {};
        

        for (int i = 1; i < n; i++) {
            if (nums[i - 1] == nums[i]) {
                ans.push_back(nums[i]);  
                break;
            }
        }

        int idxsum = 0;
        for(int i = 1; i<=n; i++){
            idxsum += i;
        }
        
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += nums[i];
        } 
        ans.push_back(idxsum - sum + ans[0]);
        return ans;
    }
};
