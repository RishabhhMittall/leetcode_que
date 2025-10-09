class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        vector<int> arr(n + n);
        for(int i = 0; i < n; i++) {
            arr[i] = nums[i];     
            arr[i + n] = nums[i];  
        }

        stack<int> st;
        // unrodered_map<int, int> mp;
        vector<int> ans(n);

        for(int i = 2*n - 1; i>= 0; i--) {
            while(!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }
            int idx = i%n;
            if(st.empty()) {
                // mp[arr[i]] = -1;
                ans[idx] = -1;
            }
            else {
                // mp[arr[i]] = st.top();
                ans[idx] = st.top();
            }
            st.push(arr[i]);
        }
        
       return ans;
    }
};

// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans;

//         for(int i = 0; i<n; i++) {
//             bool flag = false;
//             for(int j = i + 1; j <= i+n-1; j++) {
//                 int idx = j % n;

//                 if(nums[i] < nums[idx]) {
//                     ans.push_back(nums[idx]);
//                     flag = true;
//                     break;
//                 }
//             }
//             if(!flag) {
//                 ans.push_back(-1);
//             }
//         }

//         return ans;
//     }
// };