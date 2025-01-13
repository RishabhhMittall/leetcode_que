class Solution {
public:
    int maxArea(vector<int>& height) {
        // int maxwater=0;
        // int currwater=0;
        // int n=height.size();
        // for(int i=0; i < n ;i ++){
        //     for(int j=i+1; j<n ;j++){
        //         int currentWidth = abs(j-i);
        //         int currentHeight = min(height[j],height[i]);
        //         currwater = currentHeight * currentWidth;
        //         maxwater = max(maxwater, currwater);
        //     }
        // }
        // return maxwater;
        int i = 0, j = height.size() -1, area = 0;
        while(i < j) {
            int l = min(height[i] , height[j]);
            int b = abs(i-j);
            int curarea = (l*b);
            if(curarea > area) {
                area = curarea;
            }
            if(height[i] < height[j]) {
                i ++;
            }
            else{
                j --;
            }

        }
        return area;
    }
    
};