class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();

        int i = 0, j = 0;
        vector<int> ans;
        while(i < n && j < m) {
            if(nums1[i] <nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            }
            else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i < n) {
             ans.push_back(nums1[i]);
                i++;
        }
        while(j < m) {
             ans.push_back(nums2[j]);
                j++;
        }

        int s = n + m;
        if(s % 2 == 0) {
            int mid = s/2;
            double res = (ans[mid-1] + ans[mid])/2.0;
            return res;
        }
        else {
            int mid = s/2;
            double res = ans[mid];
            return res;
        }
        return  -1;
    }
};