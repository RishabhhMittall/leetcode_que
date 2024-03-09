class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();

        int s = 0, e = 0;
        while(s < n1 && e < n2) {
            if(nums1[s] == nums2[e]) {
                return nums1[s];
            }
            else if(nums1[s] < nums2[e]){
                s++;
            }
            else {
                e++;
            }
        }
        return -1;
    }
};