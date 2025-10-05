class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        
        int n = mountainArr.length();

        int l = 0, h = n - 1;

        int maxi = INT_MIN;
        int maxIdx = -1;

        while (l < h) {
            int mid = l + (h - l) / 2;

            int midVal = mountainArr.get(mid);
            // int leftVal = (mid - 1 >= 0) ? mountainArr.get(mid - 1) : -1;
            int rightVal =  mountainArr.get(mid + 1);

            if (midVal < rightVal) {
                l = mid + 1;
            } else {
                h = mid;
            }
        }
        maxIdx = l;

        int ans = -1;

        // Left side binary search (ascending)
        l = 0; 
        h = maxIdx;

        while (l <= h) {
            int mid = l + (h - l) / 2;
            int val = mountainArr.get(mid);

            if (val == target) {
                ans = mid;
                break;
            } else if (val < target) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }

        // Right side binary search (descending)
        l = maxIdx + 1; 
        h = n - 1;

        if (ans == -1) {
            while (l <= h) {
                int mid = l + (h - l) / 2;
                int val = mountainArr.get(mid);

                if (val == target) {
                    ans = mid;
                    break;
                } else if (val < target) {
                    h = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
        }

        return ans;
    }
};
