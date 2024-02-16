class Solution {
    private:
    bool func(int a,int b){
        int ct1=0,ct2=0;
        while(a){
            ct1+=a%2;
            a/=2;
        }
        while(b){
            ct2+=b%2;
            b/=2;
        }
        return ct1==ct2;
    }
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(nums[j]>nums[j+1]){
                    if(func(nums[j],nums[j+1])==false) return false;
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        return true;
    }
};