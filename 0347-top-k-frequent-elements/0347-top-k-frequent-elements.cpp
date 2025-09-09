class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(int num: nums) {
            freq[num]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for(auto [n,f]: freq) {
            bucket[f].push_back(n);
        }

        vector<int> result;
         for (int i = bucket.size() - 1; i >= 0 ; i--) {
            if(result.size() < k) {

                for(int num: bucket[i]) {
                    result.push_back(num);
                    if (result.size() == k) break;
                }
            }
         }   
         return result;
    }
};