class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int arr[nums.size()];
        int size = 0;
        for(int x : nums) {
            int i = 0, j = size;
            while(i!=j){
                int m =(i+j)/2;
                if(arr[m] < x){
                    i = m+1;
                }
                else {
                    j = m;
                }
                
            }
            arr[i] = x;
                if(i == size) size++;
            
        }
        return size;
    }
};