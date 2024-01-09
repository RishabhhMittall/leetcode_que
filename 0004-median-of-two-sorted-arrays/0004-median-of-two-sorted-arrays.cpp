class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int>ans;
        int i =0 , j = 0;
        while(i<m && j<n){
            if(nums1[i] < nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m) {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n) {
            ans.push_back(nums2[j]);
            j++;
        }
        // int mid =0;
        // while(mid != (ans.size()-1)/2) {
        //     mid++;
        // }
        // float result = (ans[mid] + ans[mid+1])/2;
        // return result;
        int s = ans.size();
        if(s%2 == 0){
            int mid1 = s/2 - 1;
            int mid2 = s/2;
            float res = (ans[mid1] + ans[mid2]) /2.0;
            return res;
        }
        else{
             
            return ans[(s-1)/2]; 
        }
        return 0;
    }
};