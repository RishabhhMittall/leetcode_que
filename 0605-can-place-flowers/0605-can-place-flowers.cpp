class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();
        int count = 0;
        for (int i = 0; i < s && count < n; ++i) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == s - 1 || flowerbed[i + 1] == 0)) {
                
                flowerbed[i] = 1;
                count++;
            }
        }
        return count == n;
    }
};
