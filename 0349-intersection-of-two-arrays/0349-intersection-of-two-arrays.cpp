class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int s1 = nums1.size(), s2 = nums2.size();
        int a = 0, b = 0;
        set<int> ans;
        while (a < s1 && b < s2) {
            if(nums1[a] == nums2[b]) {
                ans.insert(nums1[a]);
                a++;
                b++;
            }
            else if(nums1[a] < nums2[b]) {
                a++;
            }
            else b++;
        }
        vector<int> res;
        for(int num : ans) {
            res.push_back(num);
        }
        return res;
    }
};